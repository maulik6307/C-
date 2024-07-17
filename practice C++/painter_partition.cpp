#include <iostream>
using namespace std;
int main(){

//painter partition

//they give us array of  wall  length
//5,15,30,20,10
//in this array 1st wall has length of 5 and it takes 5 min to paint it.
//then we have 2 painter to divide wall but condition is we have to finish work in minimum time.


//same as the book allocation
//time-complexity=O(nlogn)
//space-complexity=O(1)

int arr[5]={5,15,30,20,10};
int M=2;//=>number of painter
int start=0;
int end=0;
int mid,ans;


if(M>arr.length()){
  return -1;
}

for(int i=0;i<arr.length();i++)
{
  start=max(start,arr[i]);
  end+=arr[i];
}


while(start<=end){
  mid=start+(end-start)/2;


  int wall=0;int count=0;

  for(int i=0;i<arr.length();i++)
  {
    wall=arr[i];
    if(pages>mid){
      count++;
      wall=arr[i];
    }
  }

  if(count<=M){
ans=mid;
end=mid-1;
  }else{
    start=mid+1;
  }
}

return ans;




return 0;
}