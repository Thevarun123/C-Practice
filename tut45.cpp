#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
 class Student
 {
      protected:
      int roll_number;
      public:
      void get_roll_number(int a1)
      {
        roll_number=a1;  
      }
       void printroll_number()
       {
           cout<<"Your roll number is :"<<roll_number<<endl;

       }
 };

   class Test : virtual public Student{
         protected:
         float english,science;
         public:
         void get_marks(int m1,int m2)
         {
             english=m1;
             science=m2;
         }
         void print_marks()
         {
             cout<<"Marks of english are:"
             <<english<<endl
             <<"Marks of science are:"
             <<science<<endl;
         }
   };
   class Sports: virtual public Student{
          protected:
          int scores;
          public:
          void en_score(int s1)
          {
            scores=s1;
          }
            void print_score()
            {

                cout<<"Your score is :"<<scores<<endl;
            }
   };

   class Result :public Test,public Sports
   {
        protected:
        float total;
        public:
    
         void print_finalmarks()
         {
              Student::printroll_number();
             Test::print_marks();
             Sports::print_score();
             total =(english+science+scores);
             cout<<"The final marks are :"<<total<<endl;
         }
   };


int main(){
name();
     Result r1;
     r1.get_roll_number(55);
     r1.get_marks(99.8,90.8);
     r1.en_score(8);
     r1.print_finalmarks();
     return 0;
}