#include <iostream>
using namespace std;
int main(){

//Find first and last position of an element in sorted array

//array:-5,7,7,8,8,10

//target:-8
//we want to find first occurence of 8 which is index=3
//we want to find last occurence of 8 which is index=4
//if there element is not exist in that array then we gave -1 as answer


//we use linear search :-time complexity=O(n)

//1.For First Occurence

int arr[5]={2,3,3,4,5}

int start=0;
int end=arr.size();
int mid;
int first=-1;
int last=-1;
int target=3

while(start<=end){

mid=start+(end-start)/2

if(arr[mid]==target){
  first=mid;
  end=mid-1;
}else if(arr[mid]<target){
  start=mid+1;
}else{
  end=mid-1;
}


//For last occurence
int start=0;
int end=arr.size();


while(start<=end){
  mid=start+(end-start)/2

  if(arr[mid]==target){
    last=mid;
    start=mid+1;
  }else if(arr[mid]<target){
start=mid+1
  }else{
    end=mid-1;
  }
}

return -1;

}



return 0;
}