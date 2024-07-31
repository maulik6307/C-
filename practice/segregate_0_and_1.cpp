#include <iostream>
using namespace std;
int main(){


//segregate 0 and 1

//suppose i have arr=0,1,1,0,0,1
//then i want it like=0,0,0,1,1,1

//1.approach
//time-complexity = O(n)

/*
int count_0=0;
int count_1=1;

for(int i=0;i<n;i++)
{
if(arr[i]==0)
{
count_0++;
}else{
count_1++;
}
}

for(int i=0;i<count_0;i++)
{
arr[i]=0;
}

for(int i=1;i<count_1;i++)
{
arr[i]=1;
}
*/


/*
2.approach=>{TWO POINTER}
time-complexity=O(n)

int start=0,int end=n-1;

while(start<=end)
{
if(arr[start]==0){
start++;
}
else{
if(arr[end]==0){
swap(arr[start],arr[end])
start++;
end--;
}else{
end--;
}

}


}



*/


return 0;
}