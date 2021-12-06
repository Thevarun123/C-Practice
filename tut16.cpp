#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
    // Call by value:
    //  int sum(int a, int b){
    //      return a+b;
    //  }
     void swap(int a ,int b)
    {  
          int temp=a;
          a=b;
          b=temp;
         // cout<<"After swapping: The value of a :"<<a<<"\t The values of b: "<<b<<endl;
        
    } 
    // Call by using pointers.
         void swapPointer(int *a,int *b){
             int temp=*a;
             *a=*b;
             *b=temp;

         }
         // Call by reference variables 
         void  swapReferenceVar(int &a,int &b){  // Easy Peesy
               int temp=a;
               a=b;
               b=temp;
           }
              int &swapchg(int &a,int &b)  // Easy peesy.
                 {
                  int temp=a; 
                  a=b;
                  b=temp;
                  return b;

              }
             
           

int main(){
name();
    
    // Call by value:
         
        //   cout<<"The sum of two numbers is :"<<sum(5,6)<<endl;
            // Call by reference 
          int a,b;
          cout<<"Enter the values of a and b ";
          cin>>a>>b;
          cout<<"Before swapping: The value of a: "<<a<<"\tThe value of b: "<<b<<endl;
          //swap(a,b);
          // Call by reference using pointer.
        //   swapPointer(&a,&b);

          // Call by reference using reference variable.
           swapReferenceVar(a,b);
            //   swapchg(a,b)=566;
          cout<<"After swapping: The value of a: "<<a<<"\tThe value of b: "<<b<<endl;

          
     return 0;
}