#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
   class Rectangle
   {
       int length,breadth;
  public:
  /*Characteristics of a Constructor 
     Constructor is a special member function with the same name as of class.
    * It should be declared in the public section of the class 
    * They are automatically invoked whenever the object is created.
    * They cannot return values and do not have a data type.
    *  It can have default arguments.
    * We cannot refer to their address.
    * It is used to initialize the objects of it's class.  */
       Rectangle(int a,int b)// Parameterized Constructor as it takes 2 parameter.
    //    Rectangle(){}// Default Constructor as it accepts no parameter.
       { 
        //    cout<<"Enter the length and breadth of the rectangle "<<endl;
        //    cin>>length>>breadth;
            length=a;
            breadth=b;
        //    length=20;
        //    breadth=40;
       }
          void outdata()
          {
              cout<<"The perimeter of the rectangle is :"<<2*(length+breadth)<<endl;
          }
   };

//    Rectangle::Rectangle()
//    {
//        length =20;
//        breadth=40;
//    }

int main(){
name();
// Rectangle r;
// r.outdata();  // Normal Call of a function 
// Implicit Call
     Rectangle r(2,3);
     r.outdata();

// Explicit Call.
     Rectangle r1= Rectangle(4,5);
     r1.outdata();
    //  r2.outdata();

     return 0;
}