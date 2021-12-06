#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operations of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? ---> Multiple inheritance
    Q2. Which mode of Inheritance are you using? ---> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Simple
{
protected:
    int val1, val2;
    int a,in;

public:
    void Enter();

    void Cal1()
    {
        int  sum, mul, sub, mod;
        float div;
        

        do
        {
            cout << "Press the code according to the operation you want to execute " << endl;
            cout << "1. Addition " << endl
                 << "2. Multiplication " << endl
                 << "3. Subtraction    " << endl
                 << "4. Division       " << endl
                 << "5. Modulus        " << endl;
            cin >> a;
            switch (a)
            {
            case 1:
            {
                sum = val1 + val2;
                cout << "The Sum of the values is :\n"
                     << sum << endl;

                //   cin>>sum;
                break;
            }
            case 2:
            {
                mul = val1 * val2;
                cout << "The product of the values is:\n"
                     << mul << endl;
                break;
            }
            case 3:
            {
                cout << "The difference of the values is " << endl;
                if (val1 > val2)
                {
                    sub = val1 - val2;
                    cout << sub;
                }

                else
                {
                    sub = val2 - val1;
                    cout << sub << endl;
                }

                break;
            }
            case 4:
            {
                div = val1 / val2;
                cout << "The result after division of the two values is :\n"
                     << div << endl;
            }
            case 5:
            {
                mod = val1 % val2;
                cout << "The modulus of the entered values is :" << mod << endl;
                break;
            }
            }
        
        cout << "Press 1 for reexecution or 0 for exit :" << endl;
        cin >> in;
        }
        while (in== 1)
            ;
        {
            switch (a)
                ;
        }
    }
};
void Simple ::Enter()
{
    do{
    cout << "Welcome to Simple Calculator !!!!!!!" << endl;
    cout << "Enter the values ,you want to perform operation on " << endl;
    cin >> val1 >> val2;

       }
 


while(in==1);
{
     switch(a);     
}
}

class Scintific
{
protected:
    int sqr, cbr;
    int s, c, t, cosec1, sec1, cot1;
    float s_r, c_r;

public:
    int i;
    int e;
    int en;
    void Entry_Data()
    {
        do
        {
            cout << "!!!!!!!Welcome to Scintific Calculator !!!!!!!" << endl;

            //  goto comeback;
            cout << "Choose from the following the options the kind of operation you want to execute  :" << endl;
            cout << "1.  Square" << endl
                 << "2.  Square Root " << endl
                 << "3.  Cube " << endl
                 << "4.  Cube Root " << endl
                 << "5.  Sin()" << endl
                 << "6.  Cos() " << endl
                 << "7.  Tan()" << endl
                 << "8.  Cosec()" << endl
                 << "9.  Sec()" << endl
                 << "10. Cot()" << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                cout << "Enter the value you want to square" << endl;
                cin >> sqr;
                cout << "The square of the entered value is :\n"
                     << pow(sqr, 2) << endl;
                break;

            case 2:
                cout << "Enter the value you want to square root" << endl;
                cin >> s_r;
                cout << "The square root of the entered value is :\n"
                     << sqrt(s_r) << endl;
                break;

            case 3:
                cout << "Enter the value you want to cube" << endl;
                cin >> cbr;
                cout << "The cube of the entered value is :\n"
                     << pow(cbr, 3) << endl;
                break;

            case 4:
                cout << "Enter the value you want to cuberoot" << endl;
                cin >> c_r;
                cout << "The cube root of the entered value is :\n"
                     << cbrt(c_r) << endl;
                break;

            case 5:
                cout << "Enter the value you want to sin()" << endl;
                cin >> s;
                cout << "The sin the entered value is :\n"
                     << sin(s) << endl;
                break;

            case 6:
                cout << "Enter the value you want to cos()" << endl;
                cin >> c;
                cout << "The cos of the entered value is :\n"
                     << cos(c) << endl;
                break;

            case 7:
                cout << "Enter the value you want to tan()" << endl;
                cin >> t;
                cout << "The tan of the entered value is :\n"
                     << tan(t) << endl;
                break;

            case 8:
                cout << "Enter the value you want to cosec" << endl;
                cin >> cosec1;
                cout << "The cosec of the entered value is :\n"
                     << asin(cosec1) << endl;
                break;

            case 9:
                cout << "Enter the value you want to sec()" << endl;
                cin >> sec1;
                cout << "The sec of the entered value is :\n"
                     << acos(sec1) << endl;
                break;

            case 10:
                cout << "Enter the value you want to cot()" << endl;
                cin >> cot1;
                cout << "The cot of the entered value is :\n"
                     << atan(cot1) << endl;
                break;
            }
            cout << "Press 1 for reexeuction and 0 for exit :" << endl;
            cin >> en;

        } while (en == 1);
        {
            switch (i)
                ;
        }
        //  comeback:
        // cout<<"The reexection has been taken place: "<<endl;
    }
};
class Hybrid : public Simple, public Scintific
{
protected:
    int a;

public:
    void show()
    {

        cout << "Press 1. for Simple calculator or 2.Scintific calculator " << endl;
        cin >> a;

        if (a == 1)
        {
            //    void Enter();
            //    void Cal1();

            Simple ::Enter(); //Solving  ambiguity using scope resolution operator.
            Simple ::Cal1();  ///Solving ambiguity rusing scope resolution  operator.
        }
        else
        {
            Scintific::Entry_Data();
        }
    }
};
int main()
{
    name();
    int i1, e;
    //  Simple s1;
    //  s1.Enter();
    //  s1.Cal1();
    // Scintific s1;
    // s1.Entry_Data();

    Hybrid h;
    // cout<<"Press 1. Simple calculator or 2. Scintific Calculator :"<<endl;

    // cin>>i1;
    // if(i1==1)
    // {
    //     h.Enter();
    //     h.Cal1();
    // }
    // else if (i1==2)
    // {
    //     h.Entry_Data();
    // }
    h.show();
    //  cout<<"Press 1 for reexecution and 0 for exit "<<endl;
    //     cin>>e;

    //             if(e==1)
    //             {
    //                  cout<<"The reexecution has taken place :"<<h.Entry_Data();
    //             }

    return 0;
}