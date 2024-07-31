#include <iostream>
using namespace std;
int main(){

//time-complexity --> BEST CASE:- O(n), WORST CASE:-O(n^2)
//Space-complexity-->O(1)

//In Best Case we have to loop array atleast one time which is :- (n-1);
//In Worst Case we have to loop array which is :- n(n-1)/2;


int arr[8]={2,5,1,3,4,8,6,0};

// for(int i=0;i<8;i++)
// {
//   for(int j=i;j>0;j--)
//   {
//     if(arr[j]<arr[j-1])
//     {
//       swap(arr[j],arr[j-1]);
//     }else{
//       break;
//     }
//   }
// }

for(int i=0;i<8;i++)
{
  for(int j=i;j>0;j--)
  {
    if(arr[j]>arr[j-1])
    {
      swap(arr[j],arr[j-1]);

    }else{
      break;
    }
  }
}

for(int i=0;i<8;i++)
{
  cout<<arr[i]<<" ";
}

return 0;
}