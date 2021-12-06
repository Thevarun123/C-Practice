#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
//6. Counting the digits of a no. 
int Count(string a)
{ 
    //  string:: iterator i;
     if(a.begin())
     {

     }
}
//5. Printing the array elements using recursion.
int A_rray(int a)
{
    // int x = 0;
    //int arr[5]={1,2,3,4,5};
    int arr[3] = {10, 22, 13};
   
    cout <<"At"<<a<<"index "<<arr[a] <<endl;
    a++;
    if (a<sizeof(arr)/sizeof(arr[0])) 
    {
        return A_rray(a);
    }
}
//4. Printing the fibonacci series using recursion.
int Fib_Series(int x1)
{
   static int a1=0,a2=1,a3;
    int count=2;
       
       
    if(x1>=1)
    {  
       a3=a1+a2;
       cout<<a3<<" ";
       a1=a2;
       a2=a3;
       return Fib_Series(x1-1);
      
    }
     cout<<endl;
    return 0;
}
//3. Printing the factorial of a number using recursion.
int Fac_torial(int f)
{

    if (f <= 1)
    {
        cout << "1 = ";
        return 1;
    }
    cout << f << " * ";
    return f * Fac_torial(f - 1);
    cout << endl;
}
//2. Calculating the sum of 1 to n numbers using recursion.
int Sum_Recurse(int b)
{

    if (b < 1)
    {
        cout << "0 = ";
        return 0;
    }
    cout << b << " + ";
    return b + Sum_Recurse(b - 1);
    return 0;
}
int Recurse(int &a)
{
    // 1. Printing first 50 natural numbers using recursion.
    // int b=1;
    // b=a;
    cout << a << " ";
    a++;
    if (a <= 50)
    {
        return Recurse(a);
    }
    else
        return 0;
}
int main()
{
    name();
    int c=0;
    int a=1;
    //1. Generating the first 50 numbers.
    //  cout<<"First 50 natural numbers are :"<<Recurse(a)<<endl;

    //2.Generating the sum of numbers starting from 1 to n.
    //cout<<"Enter the range starting from 1:"<<endl;
    //cin>>c;
    // cout<<"Sum :"<<Sum_Recurse(c)<<endl;

    //3. Generating the factorial of a no.
    // cout<<"Enter the no. you want to generate the factorial "<<endl;
    // cin>>c;
    // cout<<"Factorial: \n"<<Fac_torial(c)<<endl;

    // 4.Generating fibonacci using recursion function.
    // int a1, a2, a3, var1, var2; 
    // a1 = 0;
    // a2 = 1;
    // cout<<"Enter the limit of the series " << endl;
    // cin>>c;
    // cout<<a1<<" "<<a2<<" ";
    // Fib_Series(c-2);
    // cout<<"The values of array are: \n"<<A_rray(c)<<endl;
    string s;
    cout<<"Enter the elements in the string :"<<endl;  
    cin>>s;
    cout<<s.length<<endl;
    
    return 0;
}