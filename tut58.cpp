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
    float rating; /*Abstract base class is a class that has at least one pure virtual function in its body. 
                                The classes which are inheriting the base class must need to override the virtual function
                                of the abstract class otherwise compiler will throw an error.*/

public:
    CWH(string s, float r) //Abstract Base Class:
                           /*A class whose main function is to get called in the subsequent derived classes
                                   so that they can be utilized to their full potential.*/
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //Pure Virtual Function:
                                /*It is declared in the base class because the function of the derived classes
                                      get easily invoked. */
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