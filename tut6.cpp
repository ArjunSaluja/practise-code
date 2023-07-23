#include<iostream>
using namespace std;
int main(){
    int age;
    /*cout<<"tell me your age"<<endl;
    cin>> age;
    if(age<18){
        cout<<"you cannot come to my party"<<endl;

    }
    else if(age==18){
        cout<<"you may come or not your choice"<<endl;
}
else{
    cout<<"you will come "<<endl;
}
return 0;
    
}*/
//switch case statement
switch(age){
    case 17: 
    cout<<"you are 17"<<endl;
    break;
    case 18: 
    cout<<"you are 18"<<endl;
    break;
    case 19: 
    cout<<"you are 19"<<endl;
    break;
    default:
    cout<<"dont know"<<endl;
    break;

    return 0;
}
}