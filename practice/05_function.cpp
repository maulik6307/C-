#include <iostream>
using namespace std;


int sum(int a,int b);

void greet(){
  cout<<"Thanks for using this formula "<<endl;
}

int main(){


int num1,num2;
cout<<"Enter a value for num1 : ";
cin>>num1;
cout<<"Enter a value for num2 : ";
cin>>num2;
cout<<"Sum  value of num1 and num2 : "<<sum(num1,num2)<<endl;
greet();

return 0;
}

int sum(int a,int b){
  int c = a + b;
  return c;
}