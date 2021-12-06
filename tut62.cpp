#include<iostream>
#include<fstream>
#include<string>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
int main(){
name();
     ofstream put;
     put.open("Sample60.txt");
     put<<"This is me :\n";
     put<<"This is also me :\n";
     put<<"This is me describing myelf :\n";
     put<<"This is me and myself:\n";
     put.close();

     ifstream fix;
     string s1;
     fix.open("Sample60b.txt");
       while(fix.eof()==0)
       {
          getline(fix,s1);
          cout<<s1<<endl;
       }
     fix.close();
     return 0;
}