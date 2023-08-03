#include<iostream>
using namespace std;
class A{
   int a;
   public:
void setData( int a){
this->a=a;
}
void getData(){
    cout<<"The value of A is:"<<a<<endl;
}
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
//due to This keyword the value of a is come same as given one if we don't use that word we got an Garbage Value
//this is a keyword which is a pointer which points to the object which invoke the member finction 