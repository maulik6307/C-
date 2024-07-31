#include <iostream>
using namespace std;
int main(){


int age;
cout<<"Please Enter your valid age : ";
cin>>age;

if(age<0){
  cout<<"Please enter a valid age "<<endl;
  cout<<"You entered : "<<age<<endl;
}

else if(age>0 && age<18){
  cout<<"Your age is : "<<age<<endl;
  cout<<"You are not Elegible for Voting :("<<endl;
}
else {
  
  cout<<"Your age is : "<<age<<endl;
  cout<<"You are Elegible for Voting :)"<<endl;
}




return 0;
}