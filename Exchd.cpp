#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
void Excep(int x)
{
    try 
    {
        if (x==1)
        {
            throw x;
        }
        else if(x==0)
        {
            throw x; //character
        }
    }
    catch(int c)
    {
        cout<<"This is from integer :"<<c<<endl;        
    }
   
}
int main(){
name();
    //  int num1,num2,result;
    //  cout<<"Enter the 2 values :"<<endl;
    //  cin>>num1>>num2;
    //  try
    //  {
    //  if(num2==0)
    //  {
    //      throw num2;
    //  }    
    //  result=num1/num2;
    //  }
    //  catch(int i)
    //  {
    //      cout<<"Exception: Divion by zero is not allowed :"<<i<<endl;
    //  }
    //  cout<<"The result is :"<<result<<endl;
    // cout<<"This will call the  exception :"<<endl;
    // Excep(0);"
    string s;
    cout<<"Enter the elements of the string :"<<endl;
    cin>>s;
    cout<<"The length of the string is :"<<s.length()<<endl;
     return 0;
}
