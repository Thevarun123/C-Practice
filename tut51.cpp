#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Complex
{
    int var1, var2;

public:
    void SetData(int a, int b)
    {
        var1 = a;
        var2 = b;
    }
    void outData()
    {
        cout << "The value of var1 is :" << var1 << endl
             << "& the value of var2 is :" << var2 << endl;
    }
};
int main()
{
    // name();
    //  Complex i;
    // // Complex *ptr=&i;
    // Complex *ptr = new Complex;
    // //  (*ptr).SetData(23,43);
    // //  (*ptr).outData(); instead of calling like this we can also approach towards:
    //  ptr->SetData(34,45);
    //  ptr->outData();

    Complex *ptr = new Complex[4];
    ptr->SetData(54, 56);
    ptr->outData();

    //  ptr(1)->SetData(33,34);
    //  ptr(1)->outData();

    //  comp->SetData(23,24);
    //  comp->outData();

    //  comp->SetData(43,45);
    //  comp->outData();

    return 0;
}