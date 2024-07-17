#include <iostream>
#include <array> 
using namespace std;
int main(){

int arr[5]={3,4,5,2,1};

int start=0;
int mid;
int end = 5;

while(start<=end){
  mid=end+(start-end)/2;

  //peak element
if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
return mid;

  //right side
else if(arr[mid]>arr[mid-1])
start=mid+1;
  //left side

  else
  end=mid-1;
}
return -1;
}