#include <iostream>
using namespace std;

void name()
{
     cout << 'Author: Varun Gupta' << endl;
}
class Base
{
public:
     int a;
      void out(int a1)
     {
          a = a1;
          cout << "The value of a from base class is :" << a << endl;
     }
};
class Derived : public Base
{
public:
     int der_2;
     void out(int der_2)
     {
          this->der_2 = der_2;
          cout << "The value of a from base class is :" << der_2 << endl;
          cout << "The value of der_2 from derived class is :" << der_2 << endl;
     }
};
int main()
{
     name();

     Base b1;
     Derived d1;
     Base *ptr = &d1;
     //     (*ptr).out(5);
     ptr->out(10);

     //     Derived *pointer=&d1;
     //     (*pointer).out(6);
     return 0;
}