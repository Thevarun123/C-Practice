#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
/* The syntax for multiple inheritance:
    class derived :{Visibility-mode}- class base1 , Visibility-mode class base2
    {
        class body of class "deived ";
    };
*/
 class Base1
 {
     protected:
     int a ;
     public :
     void display1(int a1 )
     {
           a=a1;
     }
     void showa()
     {
         cout<<"The value of a is "<<a<<endl;
     }
 };
  class Base2
  {
      protected:
      int b;
      public :
      void display2(int a2)
      {
        b=a2;
      }
          void showb()
          {
              cout<<"The value of b is "<<b<<endl;
          }
  };

   class Derived: public Base1, public Base2
   {
     public :
     int sum;
     void add()
     {
        //  void showa();
        //  void showb();
         cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
         sum=a+b;
         cout<<"The sum of a and b is :"<<sum<<endl;
     }        
 };
int main(){
name();
/*
The inherited derived class will look something like this:
Data members:
    a--> protected
     --> protected

Member functions:
     en()--> public
     out()--> public
    add() --> public
*/
     Derived d1;
     d1.display1(4);
     d1.display2(5);
     d1.add();
     return 0;
}