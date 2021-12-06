#include<iostream>
using namespace std; 

void name(){
cout<<"Author: Varun Gupta"<<endl;
}


  
int main(){
name();
     //Using typedef   //typedef can change the name of any data type.
      //      typedef struct employee
      //  {
      //     long int no;
      //      char name;
      //      float salary;
      //  }ep;

    //       struct employee
    //  {
    //     long int no;
    //      char name;
    //      float salary;
    //  };
    //     //Structure
     
          //     ep kartik; 
        
    //        kartik.no = 88888;
    //        kartik.name='d';
    //        kartik.salary= 11234.88;

    //     struct employee kartik; 
        
    //        kartik.no = 999999;
    //        kartik.name='b';
    //        kartik.salary= 17989.99;

    //        cout<<"The number is :"<<kartik.no<<endl;
    //        cout<<"The name is :"<<kartik.name<<endl;
    //        cout<<"The salary is :"<<kartik.salary<<endl;
            
            //Union
        //   union house
        //   {
        //           int expenses;
        //           char name;
        //           float ration;
                
        //               /* data */
        //   };
              
        //         union house h1;
        //         h1.expenses=34;
        //        // h1.ration=34.43;
        //         h1.name='b';
        //         cout<<h1.name<<endl;
            //Enum 

            enum meal{breakfast,lunch,dinner};
            meal m1=breakfast;
            meal m2= lunch;
            meal m3= dinner;
            cout<<"The value is:"<<m1<<endl;
            cout<<"The value is:"<<m2<<endl;
            cout<<"The value is:"<<m3<<endl;
        
     return 0;
}