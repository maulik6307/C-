#include <iostream>
using namespace std;
int main(){


//suppose i have array 
//arr={1,2,4,6,18,45}

//we want to find SUM of to element is = 10.then we can use TWO POINTER method
//in this method we take two pointer and each of the pointer points respactively start and end.

int arr[6]={1,2,4,6,18,45};
int start=0;
int end=arr.length - 1;

int target = 10;


while(start<end)
{

if(arr[start]+arr[end]==target){
  return 1;
}

else if(arr[start]+arr[end]<target){
  start++;
}

else{
  end--
}
}


return 0;
}