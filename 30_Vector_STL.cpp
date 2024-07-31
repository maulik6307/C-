#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (T i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; //-->Zero length vecctor
    int element, size;
    cout << "Enter your vector size : " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter your element : ";
        cin >> element;
        vec1.push_back(element); //->Member fuction of vector
    }
    // vec1.pop_back(); //->Remove 3rd element of the vector
    vec1.erase(vec1.begin() + 1);
    display(vec1);

    // Iterator for vector
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 54); //->intertion operation for vector
    // display(vec1);

    vector<char> vec2(4); //-->4-element character vector

    vector<char> vec3(vec2); //-->4-element character vector from vec2

    vector<char> vec4(5, 4); //-->5-element character where every element value is 4

    return 0;
}