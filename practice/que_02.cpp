#include <iostream>
#include <math.h>
using namespace std;


//ARMSTRONG NO.
// if we have 2 digit number ==> 23 then ==> 2**2 + 3**2 ==> 4+9 ==>13 
//here 13 is not equal to 23 so it is not a armstrong no.

// 153 ==> 1+125+27 ==>153 so, it is a armstrong no.


int countDigit(int n){
  int count = 0;
  while(n){
    count ++;
    n/=10;
  }
  return count;
}

bool armstrongNumber(int num,int digit){
  int n=num, ans=0, rem;
  while(n){
    rem=n%10;
    n/=10;
   ans=ans+pow(rem,digit);
  }
  if(ans==num) 
  return 1;
  else 
  return 0;
}


int main(){


int num;
cout<<"Enter a number : "<<endl;
cin>>num;

int digit = countDigit(num);
cout<<armstrongNumber(num,digit)<<endl;

return 0;
}