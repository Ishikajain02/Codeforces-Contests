#include<iostream>
using namespace std;
class Fraction{
int numerator;
int denominator;
public:
Fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
}
/*Fraction add(Fraction demo){
    int val=this->denominator;
    this->denominator*=demo.denominator;
    this->numerator*=demo.denominator;
    demo.numerator*=val;
    demo.denominator*=val;
    this->numerator+=demo.numerator;
    Fraction fnew(this->numerator,this->denominator);
   return fnew;
}*/
//overloading the operator
//similarly all binary operatrs works in theb same way like * / or -

Fraction operator+(Fraction const & demo)const{
    
   int val=this->denominator;
   int x=val*demo.denominator;
   int y=this->numerator*demo.denominator;
   int y2=demo.numerator*this->denominator;
    
    Fraction fnew(y+y2,x);
   return fnew;
}
//some unary operator ++;
//bcoz of identify it is post increment we used int in parameter
Fraction operator++(int)const{
  Fraction fnew(*this);
  fnew.numerator+=fnew.denominator;
  return fnew;
}
//pre -increment 
Fraction& operator++() {
numerator = numerator + denominator;
//simplify();
return *this;
}


Fraction show(){
    cout<<this->numerator<<" ";
    cout<<this->denominator<<endl;
    return *this;
}
};
int main(){
 Fraction f1(2,3);
 Fraction f2(3,4);
// Fraction fnew=f1.add(f2);;
Fraction fnew=f1+f2;
 fnew.show();
 f1.show();
 f2.show();
 Fraction answer=f1++;
 answer.show();
Fraction answer2 = ++f2;
answer2.show();  // This shows the updated f2 due to pre-increment
f2.show();       // f2 will have the same updated state as answer2

}