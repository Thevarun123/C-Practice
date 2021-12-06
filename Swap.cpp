#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
int pointer(int *a, int *b);                //Forward Declaration.
int Arguments(int a1, int a2);              //Forward Declaration.
int Reference(int &b1, int &b2);            //Forward Declaration.
int Single_Line_plus_minus(int c1, int c2); //Forward Declaration.
int Single_Line_div_mul(int d1, int d2);    //Forward Declaration.
int X_or(int x1,int x2);  
int main()
{
    name();
    // Swapping using arithmetic operators:
    // 1. + and -.
    /*
     cout<<"Swapping using arithmetic operator i.e + and -"<<endl;
     int a,b;
     cout<<"Enter the value of a :"<<endl;
     cin>>a;
     cout<<"Enter the value of b :"<<endl;
     cin>>b;
     cout<<"Before swapping the values of a :"<<a<<" and the value of b :"<<b<<endl;
     cout<<"Swapping takes place :"<<endl;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"The value of a is :"<<a<<" and the value of b is : "<<b<<endl;
  
  2. * and /.   
     a=a*b;
     b=a/b;
     a=a/b;
     cout<<"The value of a is :"<<a<<" and the value of b is : "<<b<<endl;
*/
    //  cout<<"Swapping using pointers :"<<endl;
    cout << "Swapping using functional arguments :" << endl;
    int x, y;
    cout << "Enter the values of x and y for swapping :" << endl;
    cin >> x >> y;
    cout << "Before swapping the values of x is :" << x << " and the value of y is :" << y << endl;
    //  cout<<"The swapping is being initiated :"<<pointer(&x,&y)<<endl;
    //  cout<<pointer(&x,&y)<<endl;
    //  cout<<Arguments(x,y)<<endl;
    // cout << Reference(x, y) << endl;
    cout<< X_or (x, y); 
    // cout << Single_Line_plus_minus(x,y)<< endl;
    // cout << Single_Line_div_mul(x, y) << endl;
    //  pointer(&x,&y);
    // cout << "After swapping the values of x is :" << x << " and the value of y is :" << y << endl;
    return 0;
}
int pointer(int *a, int *b)
{
    int r_dom;
    r_dom = *a;
    *a = *b;
    *b = r_dom;
    return 0;
}
int Arguments(int a1, int a2)
{
    //Swapping using functional arguments.
    cout << "Swapping using function arguments:" << endl;
    int dump;
    dump = a1;
    a1 = a2;
    a2 = dump;
    cout << "After swapping the values of a is :" << a1 << " and the value of b is :" << a2 << endl;
    return 0;
}
//Swapping using Reference Variable.
int Reference(int &b1, int &b2)
{
    cout << "Swapping using Reference Variable " << endl;
    int put;
    put = b1;
    b1 = b2;
    b2 = put;
    return 0;
}
int Single_Line_plus_minus(int c1, int c2)
{
    cout << "Using single line arithemetic to display the swapping :" << endl;
    c1 = (c1 + c2) - (c2 = c1);
    cout << "After swapping the values of a is :" << c1 << " and the value of b is :" << c2 << endl;
    return 0;
}
int Single_Line_div_mul(int d1, int d2)
{
    cout << "Using single line arithemetic to display the swapping :" << endl;
    d1 = (d1 * d2) / (d2 = d1);
    cout << "After swapping the values of a is :" << d1 << " and the value of b is :" << d2 << endl;
    return 0;      
}
int X_or(int x1,int x2)
{
    cout<<"Swapping using X-or operator :"<<endl;
    // x1=x1^x2;
    // x2=x1^x2;
    // x1=x1^x2;
    x1= x1^x2 ^ (x2=x1);
    cout<<"After swapping the values of a is :"<<x1<<"and the value of b is :"<<x2<<endl;
    return 0;
}