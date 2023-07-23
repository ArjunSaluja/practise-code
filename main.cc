#include <iostream>
using namespace std;
main()
{

}
#include<iostream>
using namespace std;
namespace first{
    void show()
    {
        cout<<"Arjun\n";
    
    }
}
namespace second{
    void show()
    {
        cout<<"apple";
    }
}
main(){
     first::show();
     second::show();
     }
     //user defined - void fun()
     //pre define- print f() ends with semi colon
     // error tyes- syntax , run time , logical.?
     // class-local class- inside a function or block declare 
    #include <iostream>
    using namespace std;
    void fun()
    {
        class A{
            private:
            int a , b;
            public:
            void show()
            {
                cout<< "enter two  value:";
                cin>>a>>b;
                cout<<a<<" "<<b;
            }

        };
        A obj;
        obj.show();
    }
    void main()
    {   
        fun();
    }
    // global class -outside the fun. or blocl declared.
    #include<iostream>
    using namespace std;
    class A{
        int a, b;
        public:
        void input(){
            cout<<"enter two value :";
            cin>>a>>b;
        }  
        void show(){
        cout<<a<<" "<<b;
        }
    };
    void main(){
    A obj;
    obj.input();
    obj.show();
    }
    // nested class-declared or contain in another class.
    #include<iostream>
    using namespace std;
    class A
    {
        public:
        class B  //member variable of class A
        {
            int a,b;
            public:
            void input() //member function of class B
            {
                cout<< "enter two value:";
                cin>>a>>b;
            }
            void show
            {
                cout<<a<<" "<<b;
            }
        };
    };
    void main(){
    A::B obj;
    obj.input();
    obj.show();}
    // access specifier -private , protected ,public.
    // private - int a, access by member function and friend 
    // protected- iny a, ( inhertiance )
    // public -memmber function inside the class and outside the class
    //private eg.
    #include <iostream>
    using namespace std;
    class A
    {
        private:
        int a,b
        public:
        void show()
        {
            a=10; b=20;
            cout<<a<<ends<<b<<endl;

        }
         friend class B ;
    };
    class B 
    {
        public:
        void disp(A ref)
        {
            ref.a=55; ref.b=44;
            cout<<ref.a<<ends<<ref.b;

        }
    };
    void main()
    {
        A obj;  B obj2;
        obj.show();
        obj2.disp(obj);
    }
    //protected eg.
    #include<iostream>
    using namespace std;
    class Base
    {
        protected:
        int a,b;
        public: 
        void show(){
        a=22; b=99;
        cout<<a<<ends<<b<<endl;

    }
    };
    class Derive: protected Base{
        public:
        void disp(){
            a=66;b=988;
            cout<<a<<ends<<b<<endl;
        }

    };
    void main(){
    Derive obj;
    obj.show();
    obj.disp();}
    //publiceg.
    #include<iostream>
    using namespace std;
    class A
    {
        public:
        void show(){
        a=44;
        cout<<"inside the class"<<a<<endl;
    
        }
        
    };
    void main(){
        A obj;
        obj.show();
        obj.a=88;
        cout<<"outside the class"<<obj.a<<endl;}
        //class- class is a user define data type which holds data member and member function and with semi colon.
        //object- an object is a instance of a claas .whenever class is define no memory is allocated but whenever oject is there memory is alloacated
        #include<iostream>
        using namespace std;
        class A{
             void show(){
                cout<<"HelloWorld";
             }

        };
        void main(){
            A obj;
            obj.show();
        }
        #include<iostream>
        using namespace std;
        class Add{
            int a,b,c;
            public:
            void input(){
                cout<<"Enter the value";
                cin<<a<<b;
            }
            void sum(){
                c=a+b;
            }
            void show(){
                cout<<c;

            }
        };
        void main(){
            Add obj;
            obj.input();
            obj.sum();
            obj.show();
        }
       
    //inheritance- it is that in which one class inherit the property of other class.
    // four inheritance-* Single imheritance- [base class]- [derive class]
                        //* multi level inheritance-[base class]-[derive class1]-[derive class2]
                        //*multiple inheritance- [base class1] -[base class2]-[derive class]
                        //*hierarchial inheritance-[base class]-[deive class1]-[derive class2]
                        //*hybrid inheritance-[student]-[class]-[result]-[project]
    //single inheritance                    

   #include<iostream>
   using namespace std;
   class base 
   {
    private: int a,b;
    public:
    void input()
    {
        cout<<"enter value";
        cin>>a>>b;
    }
    void show(){
        cout<<"a:"<<a<<" "<<"b:"<<endl;
    }
   };
   class derive: public base
   {
    private:int m,n;
    public:
    void getdata()
    {
        cout<<"enter value";
        cin>>m>>n;
    }
    void display(){
        cout<<"m:"<<m<<" "<<"n:"endl;
    }
   };
   void main (){
    base obj;
    derive obj1;
    obj.input();
    obj.show();
    obj1.getdata();
    obj1.display();
   }

   //multi level inheritance
   #include <iostream> 
   using namespace std;
   class base {
    private:
    int a;
    public:
    void input(){
        cout<<"enter the value of base clase:";
        cin>>a;
    }
    void show(){
        cout<<a;
    }
   };
   class derive1 - public base{
    private:int b;
    public:
    void input1(){
        cout<<"enter the value:";
        cin>>b;
    }
    void show1(){
        cout<<b;
    }
   };
   class derive2- public derive1{
    private:int k;
    public:
    void input2(){
        cout<<"enter thr value:";
        cin>>k;
    }
    void show2(){
    cout<<k;}
   };
   void main(){
   base obj;
   obj.input();
   obj.show();
   derive1 obj1;
   obj.input1();
   obj.show1();
   derive2 obj2;
   obj.input2();
   obj.show2();
   }
   #include <iostream>
   using namespace std;
   class base1{
    private: int a,b,c;
    public:
    void input(){
        cout<<"enter the value:";
        cin>>a>>b;
    }
    void show(){
        c=a+b;
        cout<<"sum="<<c<<endl;
    }
   };
   class base2{
    private:int a,b,c;
    public:
    void input1(){
        cout<<" enter the valu:";
        cin>>a>>b;
    }
    void show2(){
        c=a-b;
        cout<<"sub:"<<c<<endl;
    }
   };
   class derive-public base1,public base2{
   private:int a,b,c;
   public:
   void input2(){
    cout<<"enter the value:";
    cin>>a>>b;
   }
   void show2(){
    c=a*b;
    cout<<"mul:"<<c<<endl;
   }
   };
   void maim(){
   /* base1 obj;
    obj.input();
    obj.show();*/
    base2 obj1;
    obj1.input1();
    obj1.show1();

   }
//hierarchical inheritance.
#include<iostream>
using namespace std;
class base
{
    private:
    int a,b;
    public:
    void input(){
        cout<<"enter the value :";
        cin>>a>>b;
    }
    void show()
    {
        cout<<" sum:"<<a+b<<endl;
    }
};
class derive1:public base
{
    private:
    int n1;
    public:
    void input1(){
        cout<<"enter the value:";
        cin>>n1;
    }
    void show1(){
        cout<<"n1"
    }
};
class derive2: public base
{
    private:
    int n2;
    public:
    void input2()
    {
        cout<<"enter value for derive 2 class:";
        cin>>n2;
    }
    void show2()
    {
        cout<<"n2:"<<n2<<endl;
    }
};
void main(){
    derive1 ob1;
    derive2 ob2;

    ob1.input();
    ob1.show();
}
    
//hybrid inheritance
#include<iostream>
using namespace std;
class a
{
    int n;
    public:
    void input()
    {
        cout<<"enter the value:";
        cin>>n;
    }
    void show(){
        cout<<n;
    }

};
class b:public a {

};
class c: public a{

};
class d: public a{

};
void main()
{
    a ob; b ob1; c ob2; d ob3;
}
    //function overloading-whenever a program contain more than one function with saame name but different parameters
    //eg of ffunction over loading
    #include<iostream>
    using namespace std;
    class A
    {
        int num1=22; num2=111;
        public:
        void fun(){
            int sum=num1+num2;
            cout<<"ADD:"<<sum<<endl;
        }
        void fun(int a, int b){
        int sub=a-b;
        cout<<"sub:"<<sub<<endl;
     
        }
    };
    int main(){
        ob.fun(); ob.fun(100,22)
    };
 //function overriding-whenever we writting function in base class and derive class insuch a way that fuctin name and paramter must be same
 #include<iostream>
 using namespace std;
 class A
 {
    public:
    void fun(){
        cout<<"Amit"<<endl;

    }
 };
 class b: public A{

 };
 int main(){
    b obj;
    obj.fun();
    return 0;}

 //polymorphism-polymorphism is the combination of two greek word one is poly means many and anoyjer morphism means form
 //types of polymorphism- compile time -method overloading
 // run time -method over riding
 //compile time program-
 #include<iostream>
 using namespace std;
 class a
 {
    float a,b;
    public:
    void show(int x, int y){
    a=x;   b=y;
    cout<<a<<" "<<b<<endl;
    }
    void show(float x, float y){
        a=x;  b=y;
        cout<<a<<" "<<b<<endl;
    }
 };
 int main(){
    A ob,ob2;
    ob.show(10,20);
    ob2.show( 10.2f,11.2f);
    return 0;
 }
//run time program
#include<iostream>
using namespace std;
class a
{
    public:
    void show(){
        cout<<"Hi i am base class";
    }
};
class b : public a
{
    public:
    void show(){
        cout<<"Hi i am derive class";
    }
};
{
    a *p; b_ob;
    p=&ob;
    p->show();
    return 0;
}
//encapsulation-it is an important feature of oops . that is used to wrap the data and function  into single unit.
//eg- class is an eg.
#include <iostream>
using namespace std;
class a{
   int a,b;
   public:
   void show(){
    cout<<"enter two number:";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;

   }
   void sum(){
    cout<<" enter two number:";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
   }
};
int main(){
    a obj,ob2;
    obj.show();
    obj.sum();
    return 0;
}
//abstraction- it is one of the most important feature of oop which is showing only the essential information to the outside world and hidding the tnternal details .
//#include<math.h>
//constructor-construcor is special type of function which has the same name as the class name.
//constructor is being automatically called at the time of object declaraion 
// the return type of constructor is the class type
// destrucor-it is special type of member function that is executive automatically when an object is used to destroy that is created by constructor
//it is used to deallocate the memory that has been allocated by constructor .
//a destructoe declaration should always begin withtilde sign (~
//eg of constuctor and destructor
# include <iostream>
using namespace std;
class test(){
    private:n;
    public:
    test(){
        n=10;
        cout<<n;
    }
    ~test(){
        cout<<"object destroy:"; 
    }
};
int main(){

    test obj;
};
// three types of constuctor-:
//*default constructor-A constructor that no accept of parameter.
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A{
        a=100;
        cout<<a;
    }
};
int main(){
    A obj;
    return 0;

}
//*parametrised constructor-A constructor that accept parameter is known as parameterised constructor.
#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x,int y){
        a=x; b=y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
};
    int main(){
        A obj(100,788);
        obj.show();
        return 0;
    }
//abstract class- a class which contain at least one pure virtual function . we can't declare the object of abstract class.
//pure virtual function -a function which have no defination. they start with virtual key word and ends with zero.
#include<iostream>
using namespace std;
class A{
    public:
    virtual void show()=0;
    void disp(){
        cout<<"Hi I am base class";
    }
};
class B:public A
{
    void show(){
        cout<<"hi I am derive class";
    }
}
int main(){ 
    B obj;
    //obj.disp();
    obj.show();
}
//if a class become a friend class of other class then it will acess all fuction of that class i.e. private and protected of that class.
#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void input(){
        cout<<"eneter two number:";
        cin>>a>>b;
    }
    friend class B;
};
class B
{
    int c;
    public:
    void add(A ob){
        c=ob.a+ob.b;
        cout<<"sum"<<c;

    }
};
int main (){
    A oo; B kk;
    oo.input();
    kk.add(oo);
    return 0;}
    //friend function- it is function which is not a member of class instead of that it access private and protected member of a class.
    // syntax - friend return type or function name (class ob)
  #include<iostream>
  using namespace std;
  class A{
    int a,b;
    public:
    void input(){
        cout<<"enter value:";
        cin>>a>>b;
    }
    friend void add (A ob);

  };
  void add ( A ob)
{
    int c;
    c= ob.a+ob.b;
    cout<<"sum="<<c;
}
int main(){
    A kk;
    kk.input();
    add(kk);
    return 0;

}
// Inline function- it is request to the compilier (not a command) to make a function as a inline function , to reduce the over head of a fuction calling'
//If a compiler treat a program as inline function it substitude the code in one line 
// syntax -  inline return type function name()
#include<iostream>
using namespace std;
inline int fun( int a, int b){
   return (a>b)?a;b;
} 
int main(){
    cout<<"Maximum:"<<fun(10,20);
    return 0;
}
//Template-It is frame which define its actual meaning in C++ programming. we can draw any logic using template.it will create appericiate code at the time of execution.Two type of teamplate are -One fuction template and another is class template.
// Function template is also kknown as generie function and class template is also known as generie class.
//syntax of function-Template<classtype>
//return type function name(parameterized list
//class template syntax-template<class type>
//class class name
#include<iostream>
using namespace std;
template <class T>
void show( T a, T b){
    cout<<"a:"<<a<<ends<<"b:"<<b<<endl;
}
void main(){
    int p=10,q=20;
    show(p,q);
    return 0;
}
#include<iostream>
using namespace std;
class show{
    T a,b;
    public:
    show(T p,T q){
        a=p; b=q;

    }
    void show(){
        cout<< "a:"<<a<<ends<<"b:"<<endl;
    }
};
void main(){
    show <int> ob(10,20);
    ob.show();
    return 0;
}
// Static data member -Whenever we declare a data member as a static either inside or outside of a class called static data member.
//There is only one copy data member even if ther many class object.
//It is always initialize with zero because it's default value is zero.
// It retain it's value.
// Static member function-It create a member function of a class as a static member fuction.
//It is acces on;y static data member.
//It is also accessible if we don't have any pbject of class'
#include<iostream>
using namespace std;
class A{
    int a;
    static int b;
    public:
    A(int x,int y){
        a=x; b=y;
    }
    void show(){
        cout<<a<<" "<<b; 
    }
    static void disp(){
        cout<< b; //a is not accessible.
    }
    
} ;
int A::b=o;
int main(){
    A obj(10,20),obj2(100,200);
    obj.show();  10,20
    obj2.show();  100,200
    A::disp();  200
    obj.show ();100    200
}
//file handling- file is a collection of a data  which occupied some space in the disk.
//C++ fle handling provides a mechanism to stor output a program in afile and read output from a file diplay on the disk .
// file are deal with three main classes ' Fstream,ifstream of streaam '
// If stream- To read the information from the file .
//of stream- to write something into a file we have to create a object 
//fstream - inthat both will happen read and write operation.
#include<iostream>
#include<Fstream>
using namespace std;
//excepction handling is a process to handle runtime errors. we perform exception handling. So, the flow of program can be maintained even after runtime errors . 
//Try- it is repersent block of code that can throwan exception.
//CAtch -It represent block of icode that is executed when a particular exception is thrown.
// Throw -It is usedd to thrw an exception. 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two no.";
    cin>>a>>b;
    try
    {
        {i}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}










































































































































































































































































































































































































































































































































































































































































































































































