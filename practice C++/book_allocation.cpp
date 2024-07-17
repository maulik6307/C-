#include <iostream>
using namespace std;
int main(){

//Book Allocation

//1.Every student get atleast 1 book
//2.book will be allocated in contiguouse way
//3.out of all permutation student with most number of books get min pages

//suppose i have array of book which has value as a total pages of each book
//arr=12,34,67,90

//contiguouse way means => student-1=>total of pages                                  student-2=>total pages 
// i can give this way  =>  12      => 12                                             34,67,90 =>191
//                      => 12,34    =>46                                              67,90    =>157
//                      => 12,34,67 =>113->this is the minimum                         90      =>90


//time-complexity=O(NlogN)
//space-comlpexity=O(1)

int arr[4]={12,34,67,90};
int M=2;//=>number of students
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


  int pages=0;int count=0;

  for(int i=0;i<arr.length();i++)
  {
    pages=arr[i];
    if(pages>mid){
      count++;
      pages=arr[i];
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

}