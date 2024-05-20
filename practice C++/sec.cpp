#include <iostream>
using namespace std;

class Base {
    int a,b,c;
    public:
    int d,e;

    void setData(int a1,int b1,int c1);
    void getData();
    int avg(int x,int y);
};

void Base :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

void Base::getData(){
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
    cout<<"Value of c is : "<<c<<endl;
    cout<<"Value of d is : "<<d<<endl;
    cout<<"Value of e is : "<<e<<endl;
  
}

int Base::avg(int x,int y){
    x=d;
    y=e;
    cout<<"The average of two number is : "<<(x+y)/2<<endl;
}

int main(){

Base bb;
bb.setData(1,2,3);
bb.getData();
bb.d = 2;
bb.e = 3;
// bb.avg();

return 0;
}