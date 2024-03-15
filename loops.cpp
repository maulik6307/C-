#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // For Loop
    cout << "For Loop Output" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    cout << endl;

    // While loops
    cout
        << "While Loop Output" << endl;
    int j = 2;
    while (j < 20)
    {
        cout << j << endl;
        j++;
    }
    cout << endl;

    // do while loop
    cout << "do while Loop Output" << endl;
    int z = 3;
    do
    {
        cout << z << endl;
        z++;
    } while (z < 30);
    cout << endl;
    return 0;
}
