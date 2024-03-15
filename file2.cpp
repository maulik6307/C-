#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream hout("sample2.txt");

    string s;
    cout << "Enter your name : ";
    cin >> s;

    hout << s;
    hout.close();

    ifstream hin("sample2.txt");
    string st;
    hin >> st;
    cout << "Content of the file is : " << st;
    hin.close();

    return 0;
}