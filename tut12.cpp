#include<iostream>
using namespace std; 

void name(){
cout<<"Author: Varun Gupta"<<endl;
}
int main(){
name();
     //Pointers Concept 
     /*What are pointers ? -----> Pointers are the variables that stores the address if another variable*/
     /* Declaration of pointer: Ex: b=4;   
                                   *a =&b;
      (Using star(*)a is representing the address of variable b)
        &----> (Address) of operator */
         int a=3;
         int *b=&a;
          cout<<"The address of a is: "<<&a<<endl;
          cout<<"The address of a using pointer is: "<<b<<endl;
          cout<<"The value of a is: "<<a<<endl;
          //*----> (Dereferenc) operator.
          cout<<"The value of a using pointer is: "<<*b<<endl;
        
        //Pointer to pointer.(a pointer that stores the address of another pointer)
          
          int **c=&b;
          cout<<"The address of b is "<<&b<<endl;
          cout<<"The address of b using pointer c is "<<c<<endl;
          cout<<"The value at address of b is "<<*c<<endl;
          cout<<"The value at address_of(address_of) of b is "<<**c<<endl;
         return 0;
}