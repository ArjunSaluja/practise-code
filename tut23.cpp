#include<iostream>
using namespace std;
class  complex{
    int a,b;
    public:
    complex(void);

    void printNumber(){
        cout<<"your number is"<<a<<"+"<<b<<endl;
    }
};

complex::complex(void)//default constructot
{
    a=10;
    b=12;
}
int main(){
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
    
}