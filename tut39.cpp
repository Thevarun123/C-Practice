#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Base
{
protected:
    int a = 20;

public:
    int b = 10;
};

/*For a protected member :
                            Public Derivation    Private Derivation  Protected Derivation 
 Private Members:           Not Inherited          Not Inherited       Not Inherited 
 Public Members:             Public                 Privated              Protected 
 Protected Members:         Protected               Private               Protected 
  / */

//   class Derived : protected  Base
class Derived : public Base
{
};
int main()
{
    name();
    Base b;
    Derived d;
    cout << d.a; //Will not work as a is protected in base class as well as derived class.
    return 0;
}