#include<iostream>
using namespace std;
int c=45;
int main(){
    int a ,b,c;

    cout<< "Enter the value of a:"<<endl;
    cin>>a;
    cout<< "Enter the value of b:"<<endl;
    cin>>b;
c=a+b;
    cout<<"the sum is:"<<c<<endl;
    cout<<" the global c is "<<::c;
    return 0; 
    

}