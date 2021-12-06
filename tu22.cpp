// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
 class binary
 {
       void chk_bnry();
       string s;
 public:
        void read();
        
        void one_s();
        void display();

 };
  void binary:: read()
  {
      cout<<"Enter the binary number "<<endl;
      cin>>s;
      chk_bnry();
  }

   void binary :: chk_bnry()
   {
       for(int i=0;i<s.length();i++)
       { 
            if((s.at(i)!='0') &&(s.at(i)!='1'))
            cout<<"Incorrect Value "<<endl;
            // exit(0);
            
       }
             
   }
     void binary:: one_s()
     {
         for(int i=0; i<s.length();i++)

         if (s.at(i)=='0')
         {
             s.at(i)='1';
         }
         else 
             s.at(i)='0';
     }

      void binary:: display()
      {
           cout<<"The one_s complement is:"<<endl;
          for(int i=0;i<s.length();i++)
          {
             cout<<s.at(i);
          }
      }
int main(){
name();

     binary b;
     b.read();
    //  b.chk_bnry();
     b.one_s();
     b.display();     
     return 0;
}