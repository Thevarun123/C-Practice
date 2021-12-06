#include<iostream>
#include<fstream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
int main(){
name();
    string name;
    float height;

     ofstream pout("Sample60.txt");
     cout<<"Enter your name and height: "<<endl;
     cin>>name>>height;
     pout<<name<<" is my name and my height is "<<height;
     pout.close();

string nameout;

     ifstream pin("Sample60.txt");
     getline(pin,nameout);
     cout<<"The content of this file is :"<<nameout<<endl;
     pin.close();

     return 0;
}