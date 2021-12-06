#include <iostream>
using namespace std;

void name()
{
     cout << 'Author: Varun Gupta' << endl;
}
class A
{
protected:
     int b;

public:
     //    void enData(int b)
     A enData(int b)
     {
          this->b = b;
          cout << "The value of b is :" << b << endl;

          return *this;
     }
     // void Show()
     // {
     //    cout<<"The value of b is :"<<b<<endl;
     // }
};
int main()
{
     name();

     //"this" is a keyword which is a pointer which points to the objects that invokes the member function.
     A r;
     r.enData(5);
     //  r.Show();
     return 0;
}