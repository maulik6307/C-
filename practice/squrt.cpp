#include <iostream>
using namespace std;
int main(){


//suppose we have array like 1,2,3,4,5,6
//target=20 => 1*1=1 , 2*2=4 , 3*3=9 , 4*4=16 , 5*5=25  so we gave answer=4.


int arr[5]={2,3,4,5,6}


int start=0;
int end=arr.size();
int mid;
int ans;
int target = 30;

while(start<=end)
{
  mid=end+(start-end)/2;

  if(mid==target/mid){
    ans=mid;
    break;
  }else if(mid<target/mid){
    ans=mid;
    start=mid+1;
  }else{
    end=mid-1;
  }

  return ans;
}

return 0;
}