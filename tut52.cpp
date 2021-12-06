#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
class House
{
    protected:
    int h_no;
    float h_price;
    public:
         void enData(int no, float p)
         {
             h_no=no;
             h_price=p;

         }
         void outData()
         {
             cout<<"The house no is :"<<h_no<<endl
                 <<"and the price of the house is :"<<h_price<<endl;

         }
};

int main(){
name();
     int size=4;
     int a1,i;
     float a2;
     House *ptr=new House[size];
     House *ptrTemp=ptr;
     for( i=0;i<size;i++)
     {
         cout<<"Enter the house no and the price of the house :"<<endl;
         cin>>a1>>a2;
        // (*ptr).enData(a1,a2);
             ptr->enData(a1,a2);
         ptr++;
     }
        for(i=0;i<size;i++)
        {
            // (*ptrTemp).outData();
            ptrTemp->outData();
            ptrTemp++;

        }
     return 0;
}