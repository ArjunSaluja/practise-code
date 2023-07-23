#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void disp(void);
};
void binary::read (void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for (int i = 0; i <s.length(); i++)
    {
       if (s.at(i)!='1'&& s.at(1) !='1')  {
        cout<<"incorrect binary format"<<endl;
        exit(0);
       }      /* code */
    }
    
}
void binary:: ones_compliment(void){
    for (int i = 0; i <s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
    
    else{
        s.at(i)='0';
    }
}
}
void binary::disp(void){
    cout<<"diplaying your binary number"<<endl;
 for (int i = 0; i <s.length(); i++) {
    cout<<s.at(1);
 }  
 cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.disp();
    b.ones_compliment();
    b.disp();
    return 0;
}