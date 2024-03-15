#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{

    map<string, int> markmap;
    markmap["Maulik"] = 99;
    markmap["Jay"] = 96;
    markmap["Ram"] = 89;
    map<string, int>::iterator iter;
    for (iter = markmap.begin(); iter != markmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "size is : " << markmap.size() << endl;
    cout << "Maximum size is : " << markmap.max_size() << endl;
    cout << "empty return value : " << markmap.empty() << endl;

    return 0;
}