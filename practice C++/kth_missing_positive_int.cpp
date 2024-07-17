#include <iostream>
using namespace std;
int main(){

//i have array which element are 1,3,4,5,8
//i want to find 5th missing positive integer 
//so,here first of all =>we want to check each element like 1 is present in this array or not.here is Yes so it is not missing  element 
//then we check 2 is present or not.Not it is not present so called that 2 is first missing positive integer.
//in this 1,3,4,5,8  array missing numbers are 2,6,7,9,10,11,12......
//we want 5th positive integer is 10

int arr[5]={1,3,4,5,9};
int k=2;
int start=0;
int end=arr.length()-1;
int ans;

while(start<=end)
{
  mid=end+(start-end)/2;

  if(arr[mid]-mid-1>=k)
  {
    ans=mid;
    end=mid-1;
  }else{
    start=mid+1;
  }
   
}

return ans+k;
}