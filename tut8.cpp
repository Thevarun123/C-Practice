#include<iostream>
#include<iomanip>
using namespace std;
        
        void name()
        {
            cout<<"Author: Varun Gupta \n"<<"Date: 02 June, 2021"<<endl;
        }
   
 int main()

 {
     name();
             //*******Constants***************
    //  const int a= 40;
    //  cout<<"The value of a was:"<<a<<endl;
    //  a=49;
    //  cout<<"The value of is:"<<a<<endl;
      

      //**********Manipulators************

    //   int a =3, b=33, c=3333;
    //    cout<<"The value of a without setw:"<<a<<endl; 
    //    cout<<"The value of b without setw:"<<b<<endl; 
    //    cout<<"The value of c without setw:"<<c<<endl; 
    //    cout<<"The value of a with setw:"<<setw(4)<<a<<endl; 
    //    cout<<"The value of a with setw:"<<setw(4)<<b<<endl; 
    //    cout<<"The value of a with setw:"<<setw(4)<<c<<endl;

    //          int a,b;
    //          cout<<"Enter the values of a :"<<endl;
    //          cin>>a;

    //          cout<<"Enter the value of b"<<endl;
    //          cin>>b;

    //          int f;
    //          f=a%b;
    //          cout<<"The modulus of a%b is :\n"<<a%b<<endl;

           //Operator Precedence     
            int a=3, b=4;
            int c= ((((a*5)/3)-2)+b);
            cout<<"The operator are arranged according to the precedence:\n"<<c<<endl;



     return 0;
 }