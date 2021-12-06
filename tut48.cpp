#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
/*
Case 1:
class A:public B{};
  order of execution of constructor ---> A()--->B();

Case 2:
  class A: public B, public C{};
  Order of execution of constructor --->B()--->C()--->A();

Case 3:
 class A: public B, virtual public C{};
  order of execution of constructor --->C()--->B()--->A();

Case 4:
  class A: virtual public B,virtual public C{};
   Order of execution of constructor ---->B()--->C()--->A();

*/
  class Base1
  {
      protected:
      int base1a;
      public:
         Base1(int b1)
         {
              base1a=b1;
              cout<<"This is from base1 class Constructor "<<endl;
         }
         void print ()
         {
             cout<<"The base1 value is :"<<base1a<<endl;
             
         }
  };

  class Base2
  {
         protected:
         int base2a;
         public:
         Base2(int b1)
         {
             base2a=b1;
             cout<<"This is from base2 class constructor :"<<endl;

         }
         void print_base2()
         {
             cout<<"The base2 value is :"<<base2a<<endl;
         }
  };

  class Derived :public Base1, public Base2
  {
      private:
      int der1,der2;
      public:
      Derived(int a,int b,int c,int d):Base1(a),Base2(b)
      {
            der1=c;
            der2=d;
            cout<<"This is from Derived class constructor :"<<endl;
      }
      void print_Derived()
      {
            cout<<"The value of der1 and der2 are :"<<endl
                <<der1<<endl
                <<der2<<endl;
      }
  };
int main(){
name();
    Derived d(1,2,3,4);
     d.print();
     d.print_base2();
     d.print_Derived();
     return 0;
}