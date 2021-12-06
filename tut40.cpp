#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class Student
{
protected:
    int Roll_number;

public:
    void set_roll_number(int pop)
    {
        Roll_number = pop;
    }
    void getRoll_number();
};
void Student ::getRoll_number(void)
{
    cout << "The roll no is :" << Roll_number << endl;
}
class Exam : public Student
{
protected:
    float biology;
    float maths;

public:
    void eninput(int a1, int a2)
    {
        biology = a1;
        maths = a2;
    }
    void outoutput(void);
    
};

  void Exam :: outoutput()
  {
        cout << "The marks of biology are :" << biology
             << endl
             << "The marks of maths are :" << maths << endl;
    } 
class Result : public Exam
{
protected:
    float percentage;

public:
     Result()
     {
         void getRoll_number();
         void outoutput();
     }
    void Cal()
    {
        // void getRoll_number();
        // void outoutput();
        percentage = (maths + biology) / 2;
        cout << "The percentage of marks obtained is :" << percentage << "%" << endl;
    }
};

int main()
{

    /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */

    name();
    Result r1;
    r1.set_roll_number(42);
    r1.eninput(95.0, 98.9);
    //  r1.getRoll_number();
    //  r1.outoutput();
    r1.Cal();
    return 0;
}