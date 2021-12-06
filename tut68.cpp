#include <iostream>
#include <cmath>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
template <class T1>
class Bonafide
{
public:
    T1 data;
    Bonafide(T1 a)
    {
        data = a;
    }
    void display();
};
template <class T1>
void Bonafide<T1>::display()

    {
        cout << "The square of the data is " << pow(data, 2) << endl;
    }
// template <class D1>
int RecArea(int l ,int B)
{
    cout<<"This is func() one:"<<endl;
    int result;
    // int a,b;
    // a=l;
    // b=B;
    result=l*B;
    cout<<"the area is "<<result<<endl;
    return 0;
}
int func1(int a)
{
    int b1;
    b1=a;
    cout<<"This is templatised function() calling the value of b1 is:"<<b1<<endl;
    return 0;

}
template<class D2>
int func1(D2 a)
{
    D2 b;
    cout<<"This is templatised function() calling the value of b is:"<<b<<endl;
    return 0;
}


int main()
{
    name();
    Bonafide<float> b1(5.5);
    b1.display();
     RecArea(4,5);
    func1(4);
    return 0;
}