#include<iostream>
using namespace std;
 class employee{
    int id;
    static int count;
 
 public:
 void setData(void){
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;

 }
 void getData(void){
    cout<<"the id of employee is"<<id<<"and this is employee number"<<count<< endl;
 };
 int employee::cout=100;
 int main(){
    employee arjun;
    arjun.setData();
    arjun.getData();
    return 0;
 }