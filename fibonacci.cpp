#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
//4. Printing the fibonacci series using recursion.
int Fib_Series(int x1)
{
   static int a1=0,a2=1,a3;
    int count=2;
       
       
    if(x1>=1)
    {  
       a3=a1+a2;
       cout<<a3<<" ";
       a1=a2;
       a2=a3;
       return Fib_Series(x1-1);
      }
      cout<<endl;
      return 0;
}
int main(){
name();
     //Implementing fibonacci series using different methods.
     int a1=0,a2=1,a3,limit,count;
     cout<<"Enter the limit of fibonacci series "<<endl;
     cin>>limit;
     cout<<a1<<" "<<a2<<" ";
     
    //  for(int count=2;count<limit;count++)
    //  {
    //      a3=a1+a2;
    //      cout<<a3<<" ";
    //      a1=a2;
    //      a2=a3;
    //  }
    //  cout<<endl;
     //While Loop
       count=2;
    //  while(count<limit)
    //  {
    //     a3=a1+a2;
    //     cout<<a3<<" ";
    //     a1=a2;
    //     a2=a3;
    //     count++;
    //  }
    // Using do-while Loop. 
   //  do
   //  {
   //     a3=a1+a2;
   //     cout<<a3<<" ";
   //     a1=a2;
   //     a2=a3;
   //     count++;
   //  } 
   //  while (count<limit);
    
   //    cout<<endl;
   //Using the process of recursion. 
     Fib_Series(limit-2);

     return 0;
}