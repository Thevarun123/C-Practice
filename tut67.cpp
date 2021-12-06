#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
template <class S1>
void Swapp(S1 *a, S1 *b) //Using pointers.
{
    S1 Temp = *a;
    *a = *b;
    *b = Temp;
    cout << "Values are swapped " << endl;
}
template <class T1, class T2>
float CylinderVol(T1 r, T2 h)
{
    float Vol = 3.14 * r * r * h;
    return Vol;
}
template <class T1>
float CircleArea(T1 r)
{
    float Area = 3.14 * r * r;
    return Area;
}
int main()
{
    name();
    float a;
    a = CylinderVol(4, 6);
    cout << "The volume of cylinder with radius= 4 and height= 6 is :" << a << endl;

    cout << "The area of the circle of radius=4.5 is " << CircleArea(4.5) << endl;
    int x=3,y=10; 
    Swapp(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}