#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void print_roll_number()
    {
        cout << "Your Roll Number is : " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void print_marks()
    {
        cout << "Your marks of " << endl
             << "maths is : " << maths << endl
             << "physics is : " << physics << endl;
    }
};
class Sport : virtual public Student
{
protected:
    int score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void print_score()
    {
        cout << "Your score is : " << score << endl;
    }
};
class Result : public Test, public Sport
{

protected:
    float result;

public:
    void show_result(void)
    {
        result = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "Your final result is : " << result << endl;
    }
};

int main()
{
    Result Maulik;
    Maulik.set_roll_number(12);
    Maulik.set_marks(99.8, 98.7);
    Maulik.set_score(9);
    Maulik.show_result();

    return 0;
}