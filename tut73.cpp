#include <iostream>
#include <map>
#include <string>
using namespace std;

void name()
{
    cout << 'Author: Varun Gupta' << endl;
}
int main()
{
    name();
    // Map is a associative array.
    map<string, int> No_Map(4);
    No_Map["Varun"] = 78;
    No_Map["Shilpa"] = 98;
    No_Map["Harry"] = 11;
    No_Map.insert({{"John",55},{"Laura",66}});
    map<string, int>::iterator point;
    for (point = No_Map.begin(); point != No_Map.end(); point++)
    {
        cout << (*point).first << " " << (*point).second << endl;
    }
    cout<<"The max_size is:"<<No_Map.max_size()<<endl;
    cout<<"The empty element:"<<No_Map.empty()<<endl;
    cout<<"The size is:"<<No_Map.size()<<endl;
    return 0;
}