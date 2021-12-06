#include<iostream>
using namespace std;
   int c=50;

int main(){
    cout<<"Author Varun Gupta "<<endl<<"Date: 2nd June 2021"<<endl;
   //Built in data types.
   int a,b,c;
   cout<<"Enter the value of a:"<<endl;  //Insertion Operator 
   cin>>a;  //Extraction Operator 
   
   cout<<"Enter the value of b:"<<endl; //Insertion Operator 
   cin>>b;
   c=a+b; 
   cout<<"The sum is :"<<endl<<c<<endl;
   cout<<"The value of global variable is:"<<::c<<endl; 

   //********float,double ,long double Literal **********
   float t=50.60;
   long double d= 50.60;
    
     cout<<"The value of t is:"<<t<<endl<<"The value of d is: "<<d<<endl;  
     cout<<"The size of 50.60 "<<sizeof(50.60)<<endl;
     cout<<"The size of 50.60 "<<sizeof(50.60f)<<endl;
     cout<<"The size of 50.60 "<<sizeof(50.60F)<<endl;
     cout<<"The size of 50.60 "<<sizeof(50.60l)<<endl;
     cout<<"The size of 50.60 "<<sizeof(50.60L)<<endl;

     //*******Reference Variables *******
     //Rohan----> Montu---->Tushar----->WhtiteTiger

     int x=100;
     int &y=x;

     cout<<"The value of x is:"<<x<<endl;
     cout<<"The value of y is:"<<y<<endl;

     //********Typecasting**************

     int g= 30;
     float f=30.76f;

     cout<<"The value of g is :"<<(float)g<<endl;
     cout<<"The value of F is :"<<(int)f<<endl;

      cout<<"The expression is "<<g+f<<endl;
      cout<<"The expression is "<<g+int(f)<<endl;
      cout<<"The expression is "<<g+(int)f<<endl;








   return  0;
}