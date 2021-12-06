#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
class base1
{
   protected:
   int a;
   public:
     void show()
     {
         cout<<"This is from class base1 "<<endl;
        
     }
};
  class base2
  {
         protected:
         int b;
         public:
         void show()
         {
             cout<<"This is from class base2 "<<endl;

         }
  };

   class Derived :public base1, public base2
   {
       protected:
       int i;
       public:
       void show()
       {
           base1::show();
            //    base2::show();
       }
       

    };
    class A
    {
        protected:
        int a;
       public:
        void display()
        {
            a=10;
            cout<<"The values of a is :"<<a<<endl;
        }

    };
    class B:public A
   {
        protected:
        int b=20;
        public:
        // void display()
        // {
        //     cout<<"The value of b is "<<b<<endl;
        // }
   };
int main(){
name();
     Derived d;
     d.show();
     A a;
     B b;
     b.display();

     return 0;
}