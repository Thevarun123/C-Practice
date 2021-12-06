#include<iostream>
using namespace std;

int main(){
     //Looops.


     // For Loop
     /*for(initialization; condition;updation)
     1. Initialiazation: It is the first statement to be executed in the for loop.
     2. Condition: After initialization the condition is checked and the compiler jumps right onto the loop body.
     3. Updation:  Once the loop body is executed a single time, the compiler jumps towards the updation process and thus how 
     the cycle keeps on ongoing in the following manner.
     initialization---> [condtion--->loop body---> updation--].
     */                                   

    //  for(int i =0; i<=30;i++){   
    //     //  cout<<"The for loop execution id as follows \n"<<i<<endl;
    //        cout<<i<<endl;
    //  }
        //    //Infinite for loop
        //  for(int i=0; i<50;i++)  
        //      {
        //      cout<<i<<endl;
        //      }    
    // //While Loop
    //     int a=0;
    //     while(a<40)
    //     {
    //         cout<<a<<endl;
    //         a++;
       // } 
        //    //Infinite While loop:
        //     int a=0;
        //  while(true)             {
        //      cout<<a<<endl;
        //      a++;
        //      }  
        // Do while Loop:

        //      int a=0;
        // do{
        //     cout<<a<<endl;
        //     a++;
        // }   
        //   while(a<40);

       // Infinite do while loop:
        //     cout<<"Table of 6 is as follows: "<<endl;
        // int a=6,i=1;
        // do{
        //     cout<<a*i<<endl;
        //     // a=a*i;
        //     i++;
            
        //     if(i>10){
        //         break;
        //     }  
        //        cout<<a<<"*"<<i<<": \t";
        //  }
        //   while(a<=60);
             
            int x,y,z;
                 cout<<"Enter the number for which you want to generate it's table "<<endl; 
                 cin>>x;
                for(y=1;y<=10;y++)
                {
                    cout<<x<<"*"<<y<<"is  "<<x*y<<endl;
                }
          

    return 0;
}