#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}

  inline int sum(int a, int b)
   {
       return a+b;
   }
     float money(int cash, float factor=1.04){

         return cash*factor;
     }
     int strlnght(const char *p){
         return *p;
     }
int main(){
name();
    //   int a,b;
    //   cout<<"Enter the value of a and b"<<endl;
    //   cin>>a>>b;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    //   cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
      // Default Arguements

        //  int cash=10000;
        //  cout<<"You invested money that is :" <<cash<<"after 1 year is :"<<money(cash)<<endl;
     // Contstant Arguments
        // char d='c';
        // cout<<"The constant is "<<strlnght(d)<<endl;
     return 0;
}