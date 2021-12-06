#include<iostream>
using namespace std; 

void name(){
cout<<"Author: Varun Gupta"<<endl;
}
int main(){
name();
     int i=0;
     int marks[4]={23,44,55,66};
        //   cout<<marks[0]<<endl;
        //   cout<<marks[1]<<endl;
            //marks[2]=554;  //(Change of valuea)
        //   cout<<marks[2]<<endl;
        //   cout<<marks[3]<<endl;



      //Array using while loop.
      
        // while(i<4)
        // {
        //    cout<<"The values of mark "<<i<<"is: "<<marks[i]<<endl;
        //    i++;
        // }

       //Array using for loop.

        //    for(i=0;i<4;i++)
        //    {
        //       cout<<"The values of marks at different add: "<<marks[i]<<endl;
       //    }

          //Array using for do-while loop.
            
            //  do{
            //      cout<<"The value at different addresses are: "<<marks[i]<<endl;
            //      i++;
            //     }
            //    while(i<4);       

        //Pointers and arrays using for loop
            // int *p=marks;
            // for(int n=0;n<4;n++)
            // {
            //     cout<<"The values of marks using pointer: "<<*(p+n)<<endl;
            // }

            // Arrays using pointers only.

              int *p=marks;
              cout<<"The values using the concept of pointers: "<<*p<<endl;            
              cout<<"The values using the concept of pointers: "<<*(p+1)<<endl;            
              cout<<"The values using the concept of pointers: "<<*(p+2)<<endl;            
              cout<<"The values using the concept of pointers: "<<*(p+3)<<endl<<endl;

                 cout<<"The values address of marks[0]using the concept of pointers: "<<p<<endl;            
                 cout<<"The values address of marks[1]using the concept of pointers: "<<(p+1)<<endl;            
                 cout<<"The values address of marks[2]using the concept of pointers: "<<(p+2)<<endl;            
                 cout<<"The values address of marks[3]using the concept of pointers: "<<(p+3)<<endl;            
      return 0;
}