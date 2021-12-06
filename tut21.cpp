#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
   class home
   {
       private:
       int a,b,c;
       public:
       int d,e;
    //   void setdata(int a1,int b1, int c1);
       void setdata();
       void print()
       {
           cout<<"The members are :"<<a<<endl;
           cout<<"The members are :"<<b<<endl;
           cout<<"The members are :"<<c<<endl;
           cout<<"The members are :"<<d<<endl;
           cout<<"The members are :"<<e<<endl;
       }
       
   };
        //   
          void home::setdata()
          { 
                 cout<<"Enter the values of a ,b and c "<<endl;
                 cin>>a>>b>>c;
                //  a=num1;
                //  b=num2;
                //  c=num3;
          }
         
int main(){
name();
            home welcome;
            welcome.d=34;
            welcome.e=43;
            // welcome.setdata(23,45,67);
            welcome.setdata(); 
            welcome.print();   
     return 0;
}