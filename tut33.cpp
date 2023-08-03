#include<iostream>
#include<cmath>
using namespace std; 
class ScentificCalculator{
    int a,b;
   public:
   void getData(){
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

   }
   void performOperation(){
    cout<<"The value of sin(a) is"<<sin(a) <<endl;
    cout<<"The value of cos(a)is"<<cos(a)<<endl;
    cout<<"The value of tan(a) is"<<tan(a)<<endl;
    cout<<"The value of exp(a)is"<<exp(a)<<endl;

   }

};
int main(){
    ScentificCalculator calc;
    calc.getData();
    calc.performOperation();
    return 0;
}