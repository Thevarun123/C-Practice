#include <iostream>
#include <fstream>
using namespace std;
/*These are some useful classes for working with files in C++

fstreambase                                }  
ifstream --> derived from fstreambase      }--->All three comes under fstream  header file.    
ofstream --> derived from fstreambase      }
                                                                                       
*/

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
int main()
{
    /*In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class*/
    name();
    //Opeinig files using constructor and writing it.
    string print = "This is my world.";
    string print2;
    // Opeining file using constructor and reading it.
    ofstream show("Sample60.txt"); //Write Operation.
    show << print;

    ifstream en("Sample60b.txt");
    en >> print2; //Read Operation.
                  //  cout<<print2<<endl;

    getline(en, print2);
    cout << print2 << endl;

    return 0;
}