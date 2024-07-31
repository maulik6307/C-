#include <iostream>
using namespace std;
int main(){

//sub-array

//arr[4]={1,2,3,4}

//sub-array of arr are =>{1},{2},{3},{4} =>size-1
//                     =>{1,2},{2,3},{3,4} =>size-2
//                     =>{1,2,3},{2,3,4} =>size-3
//                     =>{1,2,3,4} =>size-4

//if array has n element then number of sub-array of which has size-1 are n.
//if array has n element then number of sub-array of which has size-2 are n-1.
//if array has n element then number of sub-array of which has size-3 are n-2.
//if array has n element then number of sub-array of which has size-4 are n-3.


//if array has n element then number of sub-array of which has size-n are n-n = 1.

//print all sub-array of an array

/*

int arr[4]={1,2,3,4}

for(int i=0;i<arr.length;i++)
{
for(int j=i;j<arr.length;j++)
{
for(int k=i;k<=j;k++){
cout<<"{"<<arr[k]<<"}"<<endl;
}
}
}
*/



//DIVIDE ARRAY IN TO TWO SUBARRAY WHERE THIS TWO PART HAS EQUAL SUM 

/*
for this aproach = Time-Complexity is O(n^2)

for(int i=0;i<n-1;i++)
{
int sum1=0,sum2=0;
for(int j=0;j<=i;j++)
{
sum1 += arr[j]
}
for(int j=i+1;j<=n;j++)
{
sum2+=arr[j]
}
if(sum1==sum2)
{
return 1;
}
}
*/


/*
=>for this aproach Time-Complexity will be O(n)

int total_sum=0;
for(int i=0;i<n;i++){
total_sum+=arr[i];
}
int prefix=0;

for(int i=0;i<=n-1;i++)
{
prefix+=arr[i];
int ans=total_sum-prefix;
if(ans==prefix)
{
return 1;
}
}


*/


//Kadane's Algorithm
//find largest sum of contiguous subarray

/*
int maxi=INT_MIN
int prefix=0
for(int i=0;i<n;i++)
{
perfix=arr[i];
maxi=max(maxi,prefix);
if(prefix<0)
{
prefix=0;
}
}
return maxi;

*/

//MAXIMUM DIFFERENCE BETWEEN TWO ELEMENTS

/*

int suffix[n];
    suffix[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
         suffix[i] = max(suffix[i+1],arr[i]);
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans,suffix[i+1]-arr[i]);
    }
    return ans;

*/


return 0;
}