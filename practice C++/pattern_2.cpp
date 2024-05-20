#include <iostream>
using namespace std;
int main(){


int row,col;

  //Pattern = 1
// for(row = 1;row<=5;row ++){
//   for(col =1 ;col<=row;col ++){
//     cout<<"*"<<" ";
//   }
//   cout<<endl;
// }

//pattern = 2
// for(row = 1;row<=5;row ++){
//   for(col =1 ;col<=row;col ++){
//     cout<<col;
//   }
//   cout<<endl;
// }

//pattern = 3

// for(row = 1;row <=5 ;row++){
//   for(col = 1;col <=row ;col++){
//     cout<<row<<" ";
//   }
//   cout<<endl;
// }


//pattern = 4


// for(row = 1;row<+5;row ++){
//   for(col = row ;col>=1;col--){
//     cout<<col<<" ";
//   }
//   cout<<endl;
// }


// pattern = 5


// for(row=1;row<=5;row++){
//   for(col =1;col<=row;col++)
//   {
//   char name  ='a'+row-1;
//     cout<<name<<" ";
//   }
//   cout<<endl;
// }


//pattern = 6
// for(row = 1;row<=6;row++){
//   for(col=1;col<=(6-(row-1));col++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

//pattern = 7
for(row = 1;row<=5  ;row++){
  for(col=5;col>=(5-(row-1));col--)
 {  
  cout<<col<<" ";
// cout<<row<<"";
} 
cout<<endl;
}


return 0;
}