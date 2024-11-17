#include <iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t find(vector<int>&parent,int src){
  if(parent[src]==src)return src;
  return parent[src]=find(parent,parent[src]);
}
void unioni(vector<int>&rank,vector<int>&parent,int src,int dest,int &compo,int& largest,vector<int>&cmp){
  int parent1=find(parent,src);
  int parent2=find(parent,dest);
  if(parent1==parent2)return;
  compo--;
  if(rank[parent1]==rank[parent2]){
    parent[parent2]=parent1;
    rank[parent1]++;
    cmp[parent1]+=cmp[parent2];
    largest=max(largest,cmp[parent1]);
  }
  else if(rank[parent1]>rank[parent2]){
    parent[parent2]=parent1;
    cmp[parent1]+=cmp[parent2];
    largest=max(largest,cmp[parent1]);
   // largest=max(largest,rank[parent1]);
  }
  else{
    parent[parent1]=parent2;
    cmp[parent2]+=cmp[parent1];
     largest=max(largest,cmp[parent2]);
  }
}
int32_t main() { 
int n,m;
  cin>>n>>m;
  vector<int>parent(n,0);
  vector<int>rank(n,1);
  vector<int>cmp(n,1);
  
  for(int i=0;i<n;i++)parent[i]=i;
  int largest=1;
  int compo=n;
  while(m--){
    int u,v;
    cin>>u>>v;
    int parent1=find(parent,u);
    int parent2=find(parent,v);
    if(parent1==parent2){
      cout<<compo<<" "<<largest<<endl;
    }
    else {
      unioni(rank,parent,u,v,compo,largest,cmp);
      cout<<compo<<" "<<largest<<endl;
    }
  }

}