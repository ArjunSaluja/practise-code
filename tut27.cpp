#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary= 34.0;
    }
    Employee(){}
};
 class programmer: Employee{
    public:
    programmer( int inpId){
        id=inpId;

    }
    int languageCode=9;
 };
 int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillF(1);
    cout<<skillF.languageCode;
    return 0;

 }