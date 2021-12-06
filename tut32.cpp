#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
  #include<iostream>
using namespace std;

class Simple{
    int data1;  
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){  //Default Constructor.

            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}


    


int main(){
name();
     Simple s(12);
     s.printData();
     return 0;
}