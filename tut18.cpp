#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
     // int gen(int n)
     //      { 
     //          if(n<=1){
     //              return 1;
     //          } 
     //        return (n *gen(n-1));
     //      }

// Step by step calculation of recursion function:
          //  gen(4)= 4*gen(3);
          //  gen(4)= 4*3*gen(3);
          //  gen(4)= 4*3*2*gen(3);
          //  gen(4)= 4*3*2*1;
          //  gen(4)= 24;

          int fib(int f)
          {
             int g; 
             if(f<=1)
             {
             return 1;
             }
             return fib(f-2)+fib(f-1);
          }
int main(){
name();
     // int a, b, fact=1; 
    //  Factorial of a number using for loop.//

    // cout<<"Enter the number for which you want to generate factorial"<<endl;
    // cin>>a;
             //Factorial of a number in ascending order.//

    //  for(b=1;b<=a;b++)
    //   {
    //            fact=fact*b;

    //   }
    //      cout<<"The factorial of :"<<a<<" is "<<fact<<endl;

                       //Factorial of a number in decreasing order.//
            //    for(b=a;b>=1;b--)
            //    {
            //       fact=fact*b;
            //    }
            //       cout<<fact<<endl;

                 //Factorial of a number using recursion.//
            //   cout<<"The factorial of a is \n"<<gen(a)<<endl; 
           //Fibonacci series using for loop.

            // while(a=0)
            //  {
                
            //     b++;
            // }    
         
            
           int e;
            cout<<"Enter the position for which you want to see the values in fibonacci series "<<fib(e)<<endl;
        
     //    Program to generate fibonacci series.
     int a1=0, a2=1, a3, limit, count;
                cout<<"Enter the limit of the fibonacci series :"<<endl;
                cin>>limit;
                cout<<a1<<a2;
                
               for(count=2;count<limit;count++)
               {
                   a3=a1+a2;
                   cout<<a3<<endl;;
                   a1=a2;    //The a1 i.e 0 is assigned the value of a2 i.e 1.
                   a2=a3;    // The a2 is assigned the values of a3 i.e a1+a2 = 1. 
                             // And that's how the value of instances gets updated in every instance.
               } 
      
        return 0;
}  