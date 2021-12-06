#include<iostream>
#include<algorithm>
#include<functional>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
int main(){
name();
      cout<<"*******!HURRAY LAST TUTORIAL HAS BEEN COMPLETED.*************"<<endl;
      int arr[5]={78,12,43,110,44};
    //   sort(arr,arr+5);
    //   sort(arr,arr+5,greater<int>());
      sort(arr,arr+5,less<int>());
      for(int i=0;i<5;i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
     return 0;
}
//*******!HURRAY LAST TUTORIAL HAS BEEN COMPLETED.*************