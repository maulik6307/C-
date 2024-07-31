#include <iostream>
using namespace std;
int main(){
int arr[13] = {1,5,8,4,2,3,55,27,45,99,61,7,44};

for(int i =0;i<12;i++)
{
  int index=i;
  for(int j=i+1;j<13;j++)
  {
    if(arr[j]<arr[index])
    index=j;
  }
  swap(arr[i],arr[index]);
}
for(int i=0;i<13;i++)
{
  cout<<arr[i]<<" ";
}

cout<<endl;

// int arr2[6] = {7,2,6,4,3,5};
// for (int i=5;i>0;i--)
// {
//   int index=i;
//   for(int j=i-1;j>-1;j--)
//   {
//     if(arr2[j]>arr2[index]);
//     index=j;
//   }
//   swap(arr2[i],arr2[index]);
// }
// for(int i=0;i<6;i++)
// {
//   cout<<arr2[i]<<" ";
// }
return 0;
}