#include<iostream>
using namespace std;
//call by refernce  pointer
void swapPointer (int *a, int *b){
int temp=*a;
*a=*b;
*b= temp;
}
int main(){
    int x=4; int y=5;
    cout<<"the value of xis"<<x<<"and the value of y is"<<y<<endl;
    swapPointer(&x,&y);
    cout<<"the value of xis"<<x<<"and the value of y is"<<y<<endl;
    return 0;

}