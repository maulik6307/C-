#include <iostream>
using namespace std;

class Student
{
protected:
    int Roll_no;

public:
    void set_Roll_no(int);
    void get_Roll_no(void);
};

void Student::set_Roll_no(int r)
{
    Roll_no = r;
}
void Student::get_Roll_no()
{
    cout << "Your Roll No. is : " << Roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void set_marks(float, float, float);
    void get_marks();
};

void Exam ::set_marks(float m, float p, float c)
{
    maths = m;
    physics = p;
    chemistry = c;
}
void Exam ::get_marks()
{
    cout << "Your maths marks is : " << maths << endl;
    cout << "Your maths physics is : " << physics << endl;
    cout << "Your maths chemistry is : " << chemistry << endl;
}

class Result : public Exam
{
    float result;

public:
    void get_result()
    {
        get_Roll_no();
        get_marks();
        cout << "your result in percentage is :  " << (maths + physics + chemistry) / 3 << " % " << endl;
    }
};

int main()
{
    Result Maulik;
    Maulik.set_Roll_no(6307);
    Maulik.set_marks(99, 98, 95);
    Maulik.get_result();
    return 0;
}