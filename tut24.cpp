#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class employee
{
    int a;
    static int count;
          //***********STATIC VARIABLES***********//
    /* * Static variables are accessed outside the class.
       *  Whenever a static variables is declared , it is by default initialized with zero 
       *  Static variable gets joined with class ,that's why they are known as class variables.
       *  Life span of a static variable: Start ---->Till----> Termination of the program 
       *  Once it is declared inside the class, every object can share the same static value.
       *  Syntax:
         class emp{
                 static int stats;  
                 public:
                 static void show()
                 {
                     cout<<stats;
                 }
        };

          emp::stats; //Here we can assign the value also to the static variable stats. 
       *  */

public:
    void endata()
    {
        cout << "Enter the value " << endl;
        cin >> a;
        count++;
    }
   
    void outdata()
    {
        cout << "Your entered value is " << a << " with ID " << count << endl;
    }

    static void show()
    {   
        /****************STATIC MEMEBER FUNCTION************/
        /* A funtion that can only access the static variables/members declared inside the class.
           It doesn't require objects to call, but it can be following the below syntax:
           Syntax:
           class emp{
                 static int stats;  
                 public:
                 static void show()
                 {
                     cout<<stats;
                 }
        };
        */ 
        cout <<"The value of ID  is "<<count<<endl;

    }
};

int employee ::count; //Default value is 0.

int main()
{
    name();

    employee lebra, varun, harry, john;
    varun.endata();
    varun.outdata();
    employee::show();
    

    harry.endata();
    harry.outdata();
    employee ::show();
   

    john.endata();
    john.outdata();
    employee ::show();

    lebra.endata();
    lebra.outdata();
    employee::show();

    return 0;
}