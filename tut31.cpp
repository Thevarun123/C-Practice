#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
  class show
  {
      //Constructor Overloading.
      int a ,b;
      public:
      show()   // Constructor with zero arguments.
      {
          a=2;
          b=3;
      }
      show(int x,int y) // Constructor with 2 arguments.
      {
          a=x;
          b=y;
      }
      show(int x) //Constructor with 1 arguments.
      
      {
          a=2;
          b=0;
      }
        void outdata()
        {
            cout<<"The output is "<<a <<"and "<<b<<endl;
        }
  };
int main(){
name();
     show p(5,4);
     p.outdata();
    
     show p1(5);
     p1.outdata();
    
     show p3;
     p3.outdata();
     
  
     return 0;
}