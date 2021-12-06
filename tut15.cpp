#include<iostream>
using namespace std; 

void name(){
cout<<"Author: Varun Gupta"<<endl;
}
    // Function Definition.
   
int sum(int a  ,int b);
void gip();
int main(){
name();
     
     //funtion prototype
     //type function-name(arguments)
     //int sum(int a, int b) //--> Acceptable
     //int sum(int , int )   //--> Acceptable
     //int sum(int a, b)     //--> Not Acceptable
     int num1,num2;
     cout<<"Enter the value of :"<<num1<<endl;
         cin>>num1;

     cout<<"Enter the value of numb2"<<num2<<endl;
     cin>>num2;
      //Actual parameters are num1 and num2 
      cout<<"The sum is: \n"<<sum(num1 ,num2)<<endl;
     gip();
 return 0;
}
           int sum(int a , int b)  // Formal paremeters a and b are taking value from actual paremeter num1 and num2.
    {
        //  int c= a+b;
        //  cout<<c; 
         return a+b;
    }
    void gip(){
             cout<<"Hi! How are you!"<<endl;      
    }


