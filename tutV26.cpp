#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class cuboid
{
    int l, b, h;

public:
    friend int area(cuboid , cuboid , cuboid );
    void perform(int a1, int a2, int a3)
    {
        l = a1;
        b = a2;
        h = a3;
        
    }
    void outdata()
    {
        cout << "The length,breadth and height of the cuboid are " << l <<","<< b<<","<< h << endl;
    }

    // int cal()
    // {
    //     return (l * b + b * h + h * l);
    // }
};
int area(cuboid i1, cuboid i2, cuboid i3)
{
    // cuboid t;
    i1.l=i1.l * i1.b;
    i2.b=i2.b * i2.h;
    i3.h=i3.h * i3.l;
    // cout<<"The area is "<<endl;
    return (i1.l)+(i2.b)+(i3.h);


    // t.perform(() + () + ());
    // cout<< "The area of cuboid " << endl;
 
}

int main()
{
    name();
    cuboid c1, c2, c3, c4;
    c1.perform(2, 3, 4);
    c1.outdata();
    //  area(c1,c1,c1);
    cout<<"The area is "<<area(c1, c1, c1)<<endl;
    //    area(c1,c2,c3);

    c2.perform(10, 20, 30);
    c2.outdata();
    cout<<"The area is "<<area(c2, c2, c2)<<endl;

    c3.perform(100, 200, 300);
    c3.outdata();
    cout<<"The area is "<<area(c3, c3, c3)<<endl;

    return 0;
}