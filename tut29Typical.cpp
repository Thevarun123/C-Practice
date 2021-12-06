#include <iostream>
using namespace std;

void name()
{
     cout << 'Author: Varun Gupta' << endl;
}
//Swapping of two numbers using friend function.
class Queen;
class Jack
{
     int a;
     friend int Reverse(Jack &, Queen &);

public:
     Jack()
     {
          cout<<"Enter the first value :"<<endl;
          cin>>a;
          
     }
     void enoutdata()
     {
          

          cout << "The first entered value before swapping is :" << a<< endl;
     }
};
class Queen
{
     int b;

public:
     friend int Reverse(Jack &, Queen &);
       Queen()
      {
          cout<<"Enter the second value :"<<endl;
          cin>>b;
       }
     void Sec()
     {
         
          cout << "The second value before swapping is :" << b << endl;
     }
};
int Reverse(Jack &a1, Queen &a2)
{
     cout<<"The values are :"<<a1.a<<"\t"<<a2.b<<endl;
     int temp = a1.a;
     a1.a = a2.b;
     a2.b = temp;
     cout << "After swapping :" << a1.a << "\t" << a2.b << endl;
     return 0;
}

int main()
{
     name();
     Jack j1;
     // j1.enoutdata();
     Queen q1;
     // q1.Sec();
     cout<< Reverse(j1, q1) << endl;
     return 0;
}