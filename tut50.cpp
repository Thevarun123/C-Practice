#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
int main(){
name();
     float f=10.54;
     float *york= &f;
     cout<<"The value of f is :"<<*york<<endl;
     int *por= new int[5];
     por[0]=11;
    *(por +1)=12;
     por[2]=13;
     por[3]=14;
     por[4]=15;
     //deleter operator.
     delete [] por;
     cout<<"The value at index por[0] is :"<<*(por)<<endl;
     cout<<"The value at index por[1] is :"<<por[1]<<endl;
     cout<<"The value at index por[2] is :"<<*(por+2)<<endl;
     cout<<"The value at index por[3] is :"<<por[3]<<endl;
     cout<<"The value at index por[4] is :"<<por[4]<<endl;

     cout<<"The size of pointer por is :"<<sizeof(*por)<<endl;
     //new operator 
     int *p=new int (4);
     cout<<"The value of p is :"<<*p<<endl;
     int a=10;
     cout<<"The value of a  is "<<a<<endl;
     int *red=&a;
     *red =4546;
     cout<<"The address of a is "<<red<<endl;
     cout<<"The address of a using &a is "<<&a<<endl;
     cout<<"The value of a using pointer is "<<*red<<endl;
     return 0;

}