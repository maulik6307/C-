#include <iostream>
using namespace std;
template <class T>
class vetor
{
public:
    T *arr;
    int size;
    vetor(int m)
    {
        size = m;
        arr = new T[30];
    }
    T dot(vetor &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vetor<float> v1(3);
    v1.arr[0] = 1.2;
    v1.arr[1] = 5.2;
    v1.arr[2] = 3.2;

    vetor<float> v2(3);
    v2.arr[0] = 6.2;
    v2.arr[1] = 2.2;
    v2.arr[2] = 1.2;
    float a = v1.dot(v2);
    cout << a << endl;
    return 0;
}