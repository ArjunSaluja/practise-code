#include<iostream>
using namespace std;
 class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void intCounter(void){counter= 0;}
    void setprice(void);
    void dispprice(void);
 };
 void shop:: setprice(void){
    cout<<"enter id of your ittem no"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
 }
 void shop:: dispprice(void)
 {
   for(int i=0; i<counter;i++)
   {
      cout<<"the price of item with id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
   }
 }
int main(){
   shop dukaan;
   dukaan.intCounter();
   dukaan.setprice();
   dukaan.setprice();
   dukaan.dispprice();
   return 0;
}