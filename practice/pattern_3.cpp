#include <iostream>
using namespace std;
int main(){
int row,col;
// P=1

// for(row=1;row<=5;row++){
//   for(col=1;col<=(5-row);col++){
//     cout<<" ";
//   }
//   for(col=1;col<=row;col++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// //P=2
// for(row=1;row<=5;row++){
//   for(col=1;col<=(5-row);col++){
//     cout<<" ";
//   }
//   for(col=1;col<=row;col++){
//     cout<<row;
//   }
//   cout<<endl;
// }


//P=3

// for(row=1;row<=5;row++){
//   for(col=1;col<=(5-row);col++){
//     cout<<" ";
//   }
//   for(col=1;col<=row;col++){
//     cout<<col;
//   }
//   cout<<endl;
// }


//P=4
// int n;
// cout<<"Enter your number";
// cin>>n;
// for(row=1;row<=n;row++){
//   for(col=1;col<=(n-row);col++){
//     cout<<" ";
//   }
//   for(char name='A';name<='A'+(row-1);name++){
//     cout<<name;
//   }
//   cout<<endl;
// }

//P=5
// int n;
// cout<<"Enter a number : ";
// cin>>n;
// for(row=1;row<=n;row++){
//   for(col=1;col<=n-row;col++){
//     cout<<" ";
//   }
//   for(col=1;col<=2*row-1;col++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

//P=6
// int n;
// cout<<"Enter a number : ";
// cin>>n;
// for(row=1;row<=n;row++){
//   for(col=1;col<=n-row;col++){
//     cout<<" ";
//   }
//   for(col=1;col<=row;col++){
//     cout<<col;
//   }
//   for(col=row-1;col>=1;col--){
//     cout<<col;
//   }
//   cout<<endl;
// }

//P=7
int n;;
cout<<"Enter a number : ";
cin>>n;
for(row=n;row>=1;row--){
  for(col=1;col<=n-row;col++){
    cout<<" ";
  }
  for(col=1;col<=2*row-1;col++)
  {
    cout<<"*";
  }
  cout<<endl;
}


//P=8
// int n;
// cout<<"Enter a input : ";
// cin>>n;
// for (row=n;row>=1;row--){

//   //star
//   for(col=1;col<=row;col++){
//     cout<<"* ";
//   }
//   //space
//   for(col=1;col<=((2*n)-(2*row));col++){
//     cout<<" ";
//   }
//   //star
//   for(col=1;col<=row;col++){
//     cout<<"* ";
//   }

//     cout<<endl;
// }

// for (row=1;row<=n;row++){

//   //star
//   for(col=1;col<=row;col++){
//     cout<<"* ";
//   }
//   //space
//   for(col=1;col<=((2*n)-(2*row));col++){
//     cout<<" ";
//   }
//   //star
//   for(col=1;col<=row;col++){
//     cout<<"* ";
//   }

//     cout<<endl;
// }
return 0;
}