#include<iostream>
using namespace std; 
/*
case1:
class B public A{
    //Order of execution constructor >> fist A() Second B()
};
Case 2:
class A: public B,public C{
    //Order of execution constructor >> fist B() Second C()
};
Case3:
class A: public B, virtual public C{
 //Order of execution constructor >>  first virtual public C(), Second public B()   
}
*/
class Base1{
    int Data1;
    public:
    Base1 (int i){
    Data1=i;
    cout<<"Base1 class constructor is called"<<endl;


    }
    void printDataBase1(void){
        cout<<"The value of is "<<Data1<<endl;
    }
};
class Base2{
    int Data2;
    public:
    Base2 (int i){
    Data2=i;
    cout<<"Base2 class constructor is called"<<endl;


    }
    void printDataBase2(void){
        cout<<"The value of is "<<Data2<<endl;
    }
};
class Derived: public Base1, public Base2{
    int Derived1, Derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
    Derived1=c;
    Derived2=d;
    }
    void printDataDerived (void){
    cout<<"The value of derived1 is "<< Derived1<<endl;
    cout<<"The value of derived 2is "<< Derived2<<endl;

    }
};

int main(){
    Derived arjun(1,2,3,4);
    arjun.printDataBase1();
    arjun.printDataBase2();
    arjun.printDataDerived();
    return 0;

}