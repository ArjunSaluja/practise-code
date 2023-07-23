#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
    void Setvalue(int value){
        data = value;
    }
    friend void add(X,Y);
};
class Y{
    int num;
    public:
    void Setvalue(int value){
        num =value;
    }
friend void add(X,Y);
};
void add(X o1, Y o2){
    cout<<"sum data of X and Y object give me "<<o1.data+o2.num;
}
int main(){
    X a1;
    a1.Setvalue(3);

    Y b1;
    b1.Setvalue(24);
    add(a1,b1);
    return 0;
}