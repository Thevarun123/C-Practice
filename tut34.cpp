#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Big
{
    int a;

public:
    Big()
    {
        a=10;

    }

    Big(int o1)
    {
        a=o1;
    }
    // Whenever there is no copy constructor is found compiler supplies its own constructor.
    Big(Big &a1)
    { 
        a=a1.a;
        cout << "This is copy constructor !!!:" <<a << endl;
    }
     void show()
     {
         cout<<"The value is :"<<a<<endl;
     }
};
int main()
{ 
     Big b1,b2,b3(95),b5;
     b1.show();
     b2.show();
     b3.show();

    Big b4(b3);
    b4.show();  //Copy constructor invoked
   
   b5=b3;
   b5.show(); //Copy constructor not invoked.

   Big b12=b2;
   b12.show();// Copy Constructor invoked.


    name();
    return 1;
}