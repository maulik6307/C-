#include <iostream>
using namespace std;
int main(){


int arr[6]={4,5,6,1,2,3};
int ans=-1;
int start=0;
int end=arr.length()-1;
int target=5


while(start<=end)
{
  mid=end+(start-end)/2;

  if(arr[mid]==target)
  {
    return mid;
  }
  else if(arr[mid]>arr[0])
  {
    if(arr[start]<=target && arr[mid]>=target)
    {
      end=mid-1;
    }
    else{
      start=mid+1
    }
  }else{
    if(arr[mid]<=target && arr[end]>=target)
    {
      start=mid+1;
    }else{
      end=mid-1;
    }
  }
}


return -1;
}