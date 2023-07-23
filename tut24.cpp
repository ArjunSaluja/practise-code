#include<iostream>
using namespace std;
class  complex{
    int a,b;
    public:
    complex(int , int);

    void printNumber(){
        cout<<"your number is"<<a<<"+"<<b<<endl;
    }
};

complex::complex(int x, int y)//paramter constructor.
{
    a=x;
    b=y;}
    int main(){
        complex a(4,6);

        complex b(2,4);

        a.printNumber();
        b.printNumber();
        return 0;
    }