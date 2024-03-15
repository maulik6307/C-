#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{

    list<int> list1; //->list of 0 length
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(6);
    display(list1);

    list1.sort();
    display(list1);
    list<int> list2(5); //-->list of 5 length  which is empty
    list<int>::iterator iter;
    iter = list2.begin();
    for (iter = list2.begin(); iter != list2.end(); iter++)
    {
        cout << "enter list element :";
        cin >> *iter;
    }
    list2.sort();
    display(list2);

    list1.merge(list2);
    display(list1);
    return 0;
}