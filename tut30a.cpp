#include<iostream>
using namespace std; 
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};
class derived: public Base1,  public Base2{
    public:
    void show(){
        cout<<"the value bas1 is "<<base1int<<endl;
        cout<<"the value bas2 is "<<base2int<<endl;
        cout<<"the sum pf two value  is "<<base1int+base2int<<endl;}
};
int main(){
    derived arjun;
    arjun.set_base1int(23);
    arjun.set_base2int(5);
    arjun.show();
    return 0;
}