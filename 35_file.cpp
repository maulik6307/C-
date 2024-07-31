#include <iostream>
#include <fstream>

/*
These are the useful classes while working with file in c++ :
1.fstreambase
2.ifstream -->Derived from fstreambase
3.ofstream -->Derived from fstreambase


In order to work with file in c++.then we have first open it.
There are two ways to open file :
1.using constructor
2.using member function open() of class
*/
using namespace std;

int main()
{

    string st = "This";
    string st2;
    // Opening file with constructor and writing on it
    // ofstream out("samplefile.txt");
    // out << st;

    // File reading with :
    ifstream in("samplefile.txt");
    // in >> st2;
    getline(in, st2); //-->for full line
    cout << st2;
    return 0;
}