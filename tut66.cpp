#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}

template<class T1=int,class T2=float,class T3=float>
class Show
{
    public:
    T1 Val1;
    T2 Val2;
    T3 Val3;
      Show(T1 a,T2 b, T3 c)
      {
         Val1= a;
         Val2=b;
         Val3=c;
      }
      void Display()
      {
          cout<<"The value of val1 is "<<Val1<<endl
              <<"The value of val2 is "<<Val2<<endl
              <<"The value of val3 is "<<Val3<<endl;
      }
};
int main(){
name();
     Show<> s(8,8.16,6.54);
     s.Display();
     cout<<endl;
     Show<char, char ,int> s1('f','g',5);
     s1.Display();
     return 0;
}