#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int box1, box2;
    int a ,b,c,d;
    a=1;
    b=12;
    c=123;
    d=1234;
    // int val1,val2;
     int Sum;
    cout<<"Enter the value of box1: \n";
    cin>>box1;
    // box1=val1;
    cout<<"Enter the values of box2: \n";
    cin>>box2;
    // box2=val2;
    Sum=box1+box2;
    // cout<<sizeof(box1)<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
    cout<<"Sum: "<<setw(4)<<Sum<<endl;

    return 0;

}