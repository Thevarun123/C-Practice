#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
  class Modern;
  class Classic
  {
     int a;
    public:
    friend int add(Classic , Modern);
      Classic()
      {
         cout<<"Enter the first number :"<<endl;
         cin>>a;
         }
         void outdata()
         {
             cout<<"The number is :"<<a<<endl;

         }
 
  };
   class Modern 
   {
       int b;
       public:
       friend int add(Classic , Modern );
       Modern()
       {
           cout<<"Enter the second number :"<<endl;
           cin>>b;
       }
       void outdata1()
       {
           cout<<"The second number :"<<b<<endl;
       }
   };
  int add(Classic x1, Modern x2)
  {
        return x1.a+x2.b;
  }
int main(){
name();
     Classic c1;
     c1.outdata();

     Modern m1;
     m1.outdata1();

     cout<<"The sum of the entered values is :"<<add(c1,m1)<<endl;
     return 0;
}