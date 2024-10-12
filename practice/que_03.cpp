#include <iostream>
using namespace std;
int main(){


int a, b, c, d;
cout<<"Enter value of a : "<<endl;
cin>>a;
cout<<"Enter value of b : "<<endl;
cin>>b;
cout<<"Enter value of c : "<<endl;
cin>>c;
cout<<"Enter value of d : "<<endl;
cin>>d;

if((a==b && c==d)||(a==c && b==d)||(a==d && b==c)){
  cout<<"This is a Ractangle"<<endl;
  if(a && b) {
    cout<<"Area of Ractangle : "<<a*b<<endl;
  }
}else{
  cout<<"This is not a Ractangle"<<endl;
}


return 0;
}