#include<iostream>
using namespace std;
struct employee{
    int eId;
    char favcharacter;
    float salary;
};
int main(){
    struct employee arjun;
    arjun.eId=1;
    arjun.favcharacter='c';
    arjun.salary=1200000;
    cout<<arjun.salary;
    return 0;


}