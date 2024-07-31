#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << "The point is : (" << a << " , " << b << ")" << endl;
    }
    friend void distance(point X, point Y);
};

void distance(point X, point Y)
{
    int x1 = (X.a - Y.a);
    int y1 = (X.b - Y.b);
    int diff = sqrt(pow(x1, 2) + pow(y1, 2));
    cout << "the distance value is : " << diff << endl;
}
int main()
{

    point p(5, 6);
    p.display();
    point q(6, 6);
    q.display();
    distance(p, q);
    return 0;
}