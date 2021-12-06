#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Calculate
{
    //Compound Interest.
    int principal;
    int years;
    double interestRate;
    double returnvalue;

public:
    Calculate() {}
    // Calculate(){}
    Calculate(int p, int y, double r)
    {
        principal = p;
        years = y;
        interestRate = r;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = (returnvalue * (1 + interestRate));
        }
    }
    Calculate(int p, int y, int r)
    {
        principal = p;
        years = y;
        interestRate = float(r)/100;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = (returnvalue * (1 + interestRate));
        }
    }
    void outdata()
    {
        cout << "The principal amount " << principal
             << " invested for no of " << years << " years is " << returnvalue << endl;
    }
};
int main()
{
    name();
    Calculate c1, c2, c3;
    int p, y;
    double r;
    int R;
    cout << "Enter the principal amount , no of years and the interest rate " << endl;
    cin >> p >> y >> r;

//  Calculate c1=Calculate(p,y,r);
    c1 = Calculate(p, y, r);
    c1.outdata();
    cout << "Enter the principal amount , no of years and the interest rate " << endl;
    cin >> p >> y >> R;
    // Calculate c2=Calculate(p,y,R);
    c2 = Calculate(p, y, R);
    c2.outdata();

    return 0;
}