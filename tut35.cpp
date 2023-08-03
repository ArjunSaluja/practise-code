#include<iostream>
using namespace std; 

class Shop{
int id;
float price;
public:
void setData(int a, int b){
    id=a;
    price=b;

}
void getData(void){
    cout<<"Code"<<id<<endl;
    cout<<"Price"<<price<<endl;
    }
};
int main(){
    int size=3;
    //int *ptr=&size;

    Shop *ptr=new Shop[size];
    Shop *ptrTemp=ptr;
    int p, i;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter  Id and price of item"<<i++<<endl;
        cin>>p>>q;
       (*ptr).setData(p,q);
        ptr++;        

//doubt 
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number:"<<i+1<<endl;
        ptrTemp->getData();
    }
    return 0;

}