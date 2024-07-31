#include <iostream>
using namespace std;
int main(){

//find minimum element in rotated array.

//suppose i have array which has elements like 3,4,5,2
//so,i want to find index of value 2  

arr[6]={3,4,5,6,1,2};

int ans=arr[0];       //==>this is for if array is fully sorted form then this will be the answer.
int start = 0;
int end = arr.length()-1;

while(start<=end){

mid = end + (end-start)/2;
if(arr[mid]>=arr[0])
{
  start=mid+1;
}else{
  ans=arr[mid];
  end=mid-1;
}

}
return 0;
}