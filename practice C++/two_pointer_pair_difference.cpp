#include <iostream>
using namespace std;
int main(){


//we want to find difference between two element in given array which is equal to given target 
//Time-comlexity=O(n)

int arr[6]={2,3,5,10,50,80}
int start=0;
int end=1;
int target=45;


if(target<0){
  target=target*-1;
}

while(end<arr.length)
{
  if(arr[end]-arr[start]==target)
  {
    return 1;
  }
  else if(arr[end]-arr[start]>target)
  {
    end++
  }
  else{
    start++
  }


  if(start==end){
    end++;
  }
}

return 0;
}