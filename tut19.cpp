#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
    // Area of cuboid.
    int area(int a ,int b ,int c)
    {
        
         cout<<"The area of cuboid "<<endl;
         return (a*b+b*c+c*a);
    }
    // Area of cube.
    int area(int a)
    {
         cout<<"The area of cube "<<endl;

        return (6*a);
    }
    // Area of circle.
    int area(double r)
    {
         cout<<"The area of circle "<<endl;

          return (3.14*r*r);
    }
int main(){
name();
    //  Funtion Overloading
    int a,b,c;
       cout<<"Enter the lenght, breadth and height of the cuboid :"<<area(6,8,10)<<endl;
       cout<<"Enter the redius of the circle :"<<area(6)<<endl;
       cout<<"Enter the side of the cube :"<<area(6)<<endl;
    //    cin>>a>>b>>c;
    //    cout<<area(a,b,c);

     return 0;
}