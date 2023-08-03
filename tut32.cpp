#include<iostream>
using namespace std; 
class SimpleCalculator{
    int a,b;
   public:
   void getData(){
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

   }
   void performOperation(){
    cout<<"The value of a+b is"<<a+b<<endl;
    cout<<"The value of a-b is"<<a-b<<endl;
    cout<<"The value of a*b is"<<a*b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;

   }

};
int main(){
    SimpleCalculator calc;
    calc.getData();
    calc.performOperation();
}