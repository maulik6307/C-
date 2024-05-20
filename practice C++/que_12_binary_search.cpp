#include <iostream>
using namespace std;

//Incresing Order Array
// int Binarsearch(int arr[],int n,int key)
// {
//   int start=0;
//   int end=(n-1);
//   int mid;


//   while(start<=end)
//   {
//     mid=(start+end)/2;

//     if(arr[mid]==key){
//       return mid;
//     }
//     else if(arr[mid]<key){
//       start = mid+1;
//     }else{
//       end = mid-1;
//     }
//   }
//   return -1;
// }


//Decresing Order Array
int Binarsearch(int arr[],int n,int key)
{
  int start=0;
  int end=(n-1);
  int mid;


  while(start<=end)
  {
    mid=(start+end)/2;

    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      start = mid+1;
    }else{
      end = mid-1;
    }
  }
  return -1;
}

int main(){


int arr[1000];
int n;
cout<<"Enter your array size : "<<endl;
cin>>n;
cout<<"Enter your elements : "<<endl;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}

int key;
cout<<"Enter your element which would you find in array : "<<endl;
cin>>key;

cout<<"Your element index is : "<<Binarsearch(arr,n,key);

return 0;
}