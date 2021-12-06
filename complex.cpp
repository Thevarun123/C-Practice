#include<iostream>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
class Complex2; 
class Complex
{
    protected:
    
    public:
    int real,imag;
   friend int Sum_Complex(Complex ,Complex,Complex2 ,Complex2 );
 
    Complex()
    {
       cout<<"Enter the real part "<<endl;
        cin>>real;
    }
      void Show()
      {
          cout<<"Real part "<<real<<endl;
      }
};
class Complex2 
{
    protected:
    int imag;
    public:
    friend int Sum_Complex(Complex ,Complex ,Complex2 ,Complex2 );
    Complex2()
    {
        cout<<"Enter the imaginary part :"<<endl;
        cin>>imag;

    }
        void show()
        {
            cout<<"imaginary part is :"<<imag<<"i"<<endl;
        }
};
int Sum_Complex(Complex c1,Complex c2,Complex2 c3,Complex2 c4)
{
     int o,o1;
     o=(c1.real + c2.real);
     o1=(c3.imag + c4.imag);
     cout<<"Real part "<<o<<" + "<<o1<<" i "<<endl;
     return 0;
}
int main(){
name();
    int a1,a2;
    int a;
   
     Complex d1,d2;
     d1.Show();
     d2.Show();
     Complex2 c1,c2;
     c1.show();
     c2.show();
    //   a= Sum_Complex(d12,c2);
      cout<<Sum_Complex(d1,d2,c1,c2);

     return 0;
}