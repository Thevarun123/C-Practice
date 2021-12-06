#include <iostream>
#include <list>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
// template<typename T>
void display(list<int> &pop)
{
    list<int>:: iterator it;
    // cout << "The list elements are:" << endl;
    for (it = pop.begin(); it != pop.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    name();
    list<int> list1; //Creating a list of 0 length.
    list1.push_back(20);
    list1.push_back(1);
    list1.push_back(11);
    list1.push_back(121);
    list1.push_back(11);
    display(list1);
    // list1.reverse();   //Reverese the elements of the list. 
    list<int>:: iterator show1,show2;
    show1=list1.begin();
    show2=list1.end();
    show1=list1.erase(show1,show2);
    // show2=list1.erase(show2);
    
    

    display(list1);

    // list1.pop_front();  //Popping from the front.
    // list1.pop_back();   //Popping from the back.
    // list1.remove(11);   //Removing an element(Specified here).
     list1.sort();      //Sorting the list.
    // display(list1);
    //Displaying using organic method. 
    // list<int>::iterator iter;
    // iter=list1.end();
    // cout<<*iter<<" ";
    // iter--;
    // cout<<*iter<<" ";
    // iter--;
    // cout<<*iter<<" ";
    // iter--;
    // cout<<*iter<<" ";
    // iter--;
    // cout<<*iter<<" ";
    // iter--;
    list<int> list2(3); // Empty list of 3 size.
    list<int> :: iterator perform;
    perform=list2.begin();
    *perform= 45;
    perform++;
    *perform= 22;
    perform++;
    *perform= 110;
    
    //  display(list2);
    list2.sort();
     display(list2);

    // list1.merge(list2);
    // cout<<"After merging "<<endl;
    // display(list1);
    return 0;
}