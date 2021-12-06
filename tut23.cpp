#include<iostream>
using namespace std; 

void name()
{
cout<<'Author: Varun Gupta'<<endl;
}
  class shop
  {
      int itemID[100];    
      int itemPRICE[100];    
      int counter;    
   public:
        void initcounter()
        {
            counter=0;
        }
        void setprice();
        void display();

  };
 void shop:: setprice()
 {  
     int t;
     cout<<"Enter the no of items you want to include in your shop "<<endl;
     cin>>t;
     for(int c=0;c<t;c++)
     {
     cout<<"Enter the ID of your item no: " <<counter+1<<endl;
     cin>>itemID[counter];
     cout<<"Enter the price of your item: "<<endl;
     cin>>itemPRICE[counter];
     counter++;
     }
 }

void shop:: display()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The Price of the item with ID "<<itemID[i]<<" is "<<itemPRICE[i]<<endl;
    }
}

int main()
{
name();

     shop n;
     n.initcounter();
     n.setprice();
     n.display();      
     return 0;
}