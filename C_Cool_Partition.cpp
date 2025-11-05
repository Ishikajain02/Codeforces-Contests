#include <iostream>
#include <vector>
#include <map> // Using map for total_freq and current_segment_freq as values can be up to N and might be sparse
#include <algorithm> // For std::min
#include <set>       // For std::multiset to efficiently track min_last_occurrence

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    
    // Precompute total frequency of each value in the entire array.
    // Also, precompute the last occurrence index for each value.
    // Using map for total_freq is robust for sparse values up to N.
    std::map<int, int> total_freq;
    // last_occurrence: index `val` stores the last seen index of `val`.
    // Size `n+1` because values are 1-indexed.
    std::vector<int> last_occurrence(n + 1, -1); 
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        total_freq[a[i]]++;
        last_occurrence[a[i]] = i;
    }

    int segments = 1; // Start with 1 segment (the entire array itself is a valid partition)
    
    // `current_segment_freq`: Tracks frequencies of elements within the current segment `a[current_segment_start_idx ... i]`.
    // It's a map to handle potentially sparse element values.
    std::map<int, int> current_segment_freq;
    
    // `min_last_occurrence_tracker`: A multiset to store the `last_occurrence` indices
    // of all distinct elements that have appeared in the current segment
    // AND whose total occurrences have NOT yet been fully consumed by this segment.
    // This allows efficient retrieval of the minimum `last_occurrence` (`*min_last_occurrence_tracker.begin()`)
    // and efficient removal of elements (`erase`).
    std::multiset<int> min_last_occurrence_tracker;

    // `current_segment_start_idx` tracks the beginning of the current segment.
    // This is needed to correctly "reset" `current_segment_freq` when a cut is made.
    int current_segment_start_idx = 0;

    for (int i = 0; i < n; ++i) {
        int val = a[i];

        // If `val` is encountered for the first time in the current segment (`a[current_segment_start_idx ... i]`):
        // It's a new distinct element for this segment. Add its `last_occurrence` to the tracker.
        if (current_segment_freq[val] == 0) {
            min_last_occurrence_tracker.insert(last_occurrence[val]);
        }
        current_segment_freq[val]++;

        // If all occurrences of `val` in the entire array have now been processed
        // within the current segment:
        // It means `val` is no longer "active" (its total occurrences have been consumed by the segment).
        // Remove its `last_occurrence` from the tracker, as it won't be present in any subsequent segments.
        if (current_segment_freq[val] == total_freq[val]) {
            // `erase(value)` removes all instances of `value`. We need to remove only one.
            // `erase(iterator)` removes the element pointed to by the iterator.
            min_last_occurrence_tracker.erase(min_last_occurrence_tracker.find(last_occurrence[val]));
        }
        
        // Check if a cool cut can be made after index `i`.
        // A cool cut is possible if `i` is not the very last element of the array, AND
        // the `min_last_occurrence` of all currently "active" elements (those
        // still in `min_last_occurrence_tracker`) is greater than or equal to `i + 1`.
        if (i < n - 1 && !min_last_occurrence_tracker.empty() && *min_last_occurrence_tracker.begin() >= i + 1) {
            segments++; // Found a valid cool partition point, increment segment count.
            
            // "Reset" `current_segment_freq` for elements that belong to the segment that just finished.
            // We iterate through the elements of the segment `a[current_segment_start_idx ... i]`
            // and decrement their counts. This ensures `current_segment_freq` correctly reflects
            // counts for the *new* segment starting at `i+1`.
            // The sum of these inner loop iterations across all segments is O(N).
            for (int j = current_segment_start_idx; j <= i; ++j) {
                current_segment_freq[a[j]]--;
                // Note: We don't remove from `min_last_occurrence_tracker` here, as that's handled
                // when `current_segment_freq[val] == total_freq[val]`.
            }
            current_segment_start_idx = i + 1; // Update start of the new segment.
        }
    }

    std::cout << segments << std::endl;
}

int main() {
    // Optimize C++ standard streams for faster input/output.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}