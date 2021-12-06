#include<iostream>
using namespace std;

void name(){
    cout<<"Author:\n Varun Gupta \n Date: 4th June 2021"<<endl;
}
 
 int main(){
     name();
     int age;
     cout<<"Enter your age"<<endl;
     cin>>age;
    // 1: Selection control structure: if else-if else ladder.
    //  if((age<21) &&(age>10)) 
    // {    
    //     cout<<"You are not allowed to drink"<<endl; 
    // }
    //  else if(age==21) 
    //  {
    //      cout<<"You are allowed to drink only in certain premises"<<endl;
    //  }
    //  else if(age<10)
    // {
    //        cout<<"You are a child"<<endl;
    // }    
    // else if((age>31)&&(age<40))
    // {
    //    cout<<"You can freely drink but beware of your wife"<<endl;
    // }
    //    else
    //    {
    //        cout<<"You are allowed to drink"<<endl;
    //    }
         
         
         //Selection control structures: The switch case.
         switch (age)  
      {
         case 21:
         cout<<"You are allowed to drink in certain premises"<<endl;
         break;

         case 10:
         cout<<"You cannot drink"<<endl;
         break;

         case 30:
         cout<<"You are allowed to drink anywhere:"<<endl;
         break;
         
         default:
           cout<<"Invalid input"<<endl;
           break;
    }
         

   return 0; 

 }