#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
int count=0;
 class Hash
 {
    //  Destructor never takes an argument nor does it return any value.
    public:
    Hash()
    {
        count++;
        cout<<"This is declaration of constructor for object:"<<count<<endl;
    }
    ~Hash()
    {
        cout<<"This is declaration of destructor for object:"<<count<<endl;
        count--;
    }
 };
int main(){
name();
     cout<<"This is main body :"<<endl;
     cout<<"Creating first object b1"<<endl;
     Hash b1;
     {
         cout<<"Entering this block "<<endl;
         cout<<"Creating two more objects "<<endl;
         Hash b2,b3;
         cout<<"Exiting the entire block"<<endl;
     }
     return 0;
}