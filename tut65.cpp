#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
/*
 CLASS TEMPLATE WITH MULTIPLE PARAMETERS(ONE,TWO OR MORE THAN ONE)
 template<class T1,class T2.....(COMMA SEPARATION)>
 class class_name{
    //body of the class
 };
 */
template<class D1,class D2,class D3>
   class Example 
   {
        public:
        D1 val1;
        D2 val2;
        D3 sum;
        Example(D1 a , D2 b)
        {
            val1=a;
            val2=b;
            sum=val1+val2;
            // cout<<"The sum of the entered values is :"<<sum<<endl;
        }
        ~Example()
        {
            cout<<"This statement is comuing from a destructor :"<<endl;
        }
    //Using function call. 
        void Display()
        {
            // val1=a;
            // val2=b;
            // sum=val1+val2;
        cout<<"The sum of the entered values is :"<<sum<<endl;
        }

   };
int main(){
name();
int a;
float b,c;
      cout<<"Enter the values for the intake :"<<endl;
      cin>>a>>b;
     Example<int,float,float> obj(a,b);
     {
         cout<<"The statement of the constructor is invoked "<<endl;
        obj.Display();
     }
     return 0;
}