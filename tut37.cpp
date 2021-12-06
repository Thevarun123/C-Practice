#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Worker
{
public:
    int no;
    int name;
    Worker(int pop)
    {
          name = 85; 
        no = pop;
     cout << "This is the value of pop " << no << endl;
     
    }
     
    Worker() {}
    void outdata()
    {
        cout << "This is it " << endl;
    }
};
// The syntax :
    // class-derived-name : {Visibility-Mode} {Derived-base-name} {};
/* Public visibility mode: The public members of the base class becomes the public members of the derived class.
   Private visibility mode: The public members of the base class becomes the private members of the derived class.
   By default: Visibility mode is Private.
   The private members are never invoked. */

class Transporter : public Worker
{

public:
    int Price;
    //  float Wage;
    Transporter(int en)
    {
        no = en;
        Price = 100;
    }
    void outdata2()
    {
        cout << "This is the second data \n"
             << no << endl;
    }
};
int main()
{
    name();
    Worker rajesh(2), mahi(6), hari(3);
    cout<<"This is name "<<rajesh.name<<endl;
    cout<<"This is name "<<mahi.name<<endl;
    cout<<"This is name "<<hari.name<<endl;
    // hari.name;

    Transporter T1(10), t2(20);
// T1.no; is only invoked because the base class is decalared public while initializing.
    cout << T1.no << endl;
    cout << T1.Price << endl;
    // T1.Price;
    T1.outdata2();

    return 0;
}