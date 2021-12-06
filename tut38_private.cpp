#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
 class Cuboid 
 {
    int l;
   public:
     int b,h;
     void SetValues()
     {
         cout<<"Enter the length ,breadth and height of the cuboid :"<<endl;
         cin>>l>>b>>h;
     }
     int length()
     {
      return l;   
     }


 };
  class Volume :  Cuboid
  {
       int Vol;
       public:
       void Cal()
       {
           SetValues();
           Vol=length()*b*h;
           cout<<"The volume is :\n"<<Vol<<endl;
       }
       void outdata()
       {
           cout<<"These are the length,breadth and height of the cuboid \n:"<<length()
                <<endl<<b<<endl<<h<<endl;
       }     
  };
int main(){
name();
     Volume V1;
     V1.Cal();
     V1.outdata();
     V1.Cal();
     return 0;
}