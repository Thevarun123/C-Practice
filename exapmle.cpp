#include<iostream>
using namespace std;

class Base2;
class Base1
{
    protected:
    int first;
    public:
    friend int sum(Base1,Base2);
    void endata(int b)
    {
        first= b;
        cout<<"The first number is :"<<first<<endl;
    }

};
class Base2
{
    protected:
    int second;
    public:
    friend int sum(Base1,Base2);
    void endata2(int c)
    {
        second=c;
        cout<<"The second is :"<<second<<endl;
    }
};

int sum(Base1 b1,Base2 b2)
{
    //  cout<<"The sum is "<<endl;
     return b1.first+b2.second;
}
int main()
{
    Base1 m1;
    Base2 m2;
    m1.endata(10);
    m2.endata2(20);
    sum(m1,m2);
}