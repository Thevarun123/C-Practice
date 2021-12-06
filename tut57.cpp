#include <iostream>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
protected:
    float Vidlength;

public:
    CWHVideo(string s, float r, float vlen) : CWH(s, r)
    {
        Vidlength = vlen;
    }

    void display()
    {
        cout << "The title of this video is " << title << endl
             << "The ratings are :" << rating << endl
             << "and the videolength is :" << Vidlength << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title of this video is " << title << endl
             << "The ratings are :" << rating << endl
             << "and the words is :" << words << endl;
    }
};

int main()
{
    name();
    CWHVideo DV("Python Tutorial", 4.54, 5.54);
    // DV.display();
    CWHText TX("Java Tutorial", 4.65, 456);
    // TX.display();
    CWH *red[2];
    red[0] = &DV;
    red[1] = &TX;
    red[0]->display();
    red[1]->display();
    return 0;
}
/* 
Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
  
The main thing to note here is that if we don’t use the “virtual” keyword with
the “display” function of the base class then the “display” function of the base class will run.

But we have used the “virtual” keyword with the “display” function of the base class to make is a
virtual function so when the display function is called by using the base class pointer the display 
function of the derived class will run because the base class pointer is pointing to the derived class object.

*/