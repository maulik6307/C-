#include <iostream>
using namespace std;
int main(){


//suppose i have array which has elements like 2,5,6,7,8

//prefix sum start with first element like => 2,7,13,20,28

//for prefix sum

//first of all we want to create vector or array to store sum of element

/*
arr[5]={2,5,6,7,8};

vector<int>prefix(n);

prefix[0]=arr[0];

for(int i=1;i<n;i++){
prefix[i]=prefix[i-1]+arr[i]
}
*/




//sufix sum start with last element and goes to first element => 28,26,21,15,8

/*
arr[5]={2,5,6,7,8};

vector<int>prefix(n);

prefix[0]=arr[arr.length-1];

for(int i=n-2;i<0;i--){
prefix[i]=prefix[i+1]+arr[i]
}
*/




return 0;
}