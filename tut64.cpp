#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T DotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    name();
    // Vector<int> v1(3);
    // v1.arr[0] = 2;
    // v1.arr[1] = 3;
    // v1.arr[2] = 4;

    // Vector<int> v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 6;
    // v2.arr[2] = 7;
    // int a = v1.DotProduct(v2);
    // cout << "The dot product is :" << a << endl;
    
    Vector<float> v1(3);
    v1.arr[0] = 2.8;
    v1.arr[1] = 3.7;
    v1.arr[2] = 4.5;

    Vector<float> v2(3);
    v2.arr[0] = 4.0;
    v2.arr[1] = 6.1;
    v2.arr[2] = 7.8;
    float a = v1.DotProduct(v2);
    cout << "The dot product is :" << a << endl;
    
    return 0;
}