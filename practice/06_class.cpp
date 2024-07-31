#include <iostream>
using namespace std;


class base{


private:

int a,b;

public:
int c,d;

 void setData(int x,int y);
 void getData(){

  if(a && b){

  cout<<"value of a : "<<a<<"& value of b :"<<b<<endl;
  }
  if(c && d){

  cout<<"value of c : "<<c<<"& value of d :"<<d<<endl;
  }else{
    return;
  }
 }


};

void base::setData(int x,int y){
  a=x;
  b=y;
}


int main(){

base maulik;
maulik.setData(4,5);
maulik.getData();
maulik.c = 45;
maulik.d = 55;
maulik.getData();



return 0;
}