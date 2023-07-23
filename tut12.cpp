#include<iostream>
using namespace std;
float moneyrecived(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}
int main(){
    int money=10000;
    cout<<"if you have "<<money<<"rs in your bank account,you will recive"<<moneyrecived(money)<<"its after 1year";
    return 0;
}