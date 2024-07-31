#include <iostream>
using namespace std;
int main(){

//Agressive Cow

//in this problem we want to stall cows in to maximum distance between two cows 

//suppose we have stall like 1,2,4,8,9 =>here number is distance
//we have 3 cows to stall
//if we stall cow in this way => 1st cow stall at 1 
//                            => 2nd cow stall at 2 
//                            => 3rd cow stall at 4

//here dis between first and sec cow is 1
//and dis between sec and third cow is 2

// so minimum is 1 

//then suppose ,
//if we stall cow in this way => 1st cow stall at 1 
//                            => 2nd cow stall at 4 
//                            => 3rd cow stall at 8

//here distance between first and sec cow is 3
//and distance between sec and third cow is 4

// so minimum is 3


//in last we want to find maximum of 1 and 3 which  is 3. =>here we want to find (min)max distance 
  
int k=4 //=>number of cows
int stall[5]={1,2,5,7,9}
int start=0;
int end,mid,ans;
int n=stall.length()

//first of all sort stall array 

end=stall[n-1]-stall[0];

while(start<=end){
  mid=end+(start-end)/2;

  int count=1,pos=stall[0];
for(int i=1;i<n;i++)
{
  if(pos+mid<=stall[i]){
    count++;
    pos=stall[i]
  }
}
if(count<k){
  end=mid-1
}else{
  ans=mid;
  start=mid+1
}

}

return ans;
}