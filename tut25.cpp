#include<iostream>
using namespace std;
class BankDeposit{
    int pricipal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
    
};

BankDeposit::BankDeposit(int p, int y, float r){
    pricipal=p;
    years=y;
    interestRate = r;
    returnValue= pricipal;
    for (int i=0; i<y; i++){
        returnValue= returnValue*(1+interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r){
    pricipal=p;
    years=y;
    interestRate = float(r)/100;
    returnValue= pricipal;
    for (int i=0; i<y; i++){
        returnValue= returnValue*(1+interestRate);
    }
}
void BankDeposit:: show(){
    cout<<endl<<"pricipal amount was"<<pricipal<<". Return value after "<<years<<"years is"<<returnValue<<endl;
}
int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout<< "enter the value pf p y and r"<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();
    
    cout<< "enter the value pf p y and r"<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}