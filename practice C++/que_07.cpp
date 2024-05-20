#include <iostream>
using namespace std;
int main(){


int arr[] = {1,2,3,4,5};

int x;

cout<<"Please Enter any number between 1 to 5 : "<<endl;
cin>>x;

for(int i=0;i<=6;i++ ){
  if(arr[i]==x){
     cout<<"here is the element"<<endl;
  }else{

  cout<<"sorry"<<endl;
  }
}



return 0;
}