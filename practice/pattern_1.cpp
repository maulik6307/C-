#include <iostream>
using namespace std;
int main(){


//QUE-1
//print-

/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

//CODE:-

// for(int i=0;i<=5;i++)
// {
//     for (int j=0;j<=5;j++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


//QUE-2
//Print-

/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/

//CODE:-

// for(int i=0;i<=5;i++){
//     for(int j=0;j<=5;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }



//QUE-3
//Print-

/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5
*/


//CODE:-
/*

for(int i=0;i<=5;i++){
for(int j=0;j<=5;j++){
cout<<j<<" ";
}
cout<<endl;
}

*/



for(int i=0;i < 5;i ++){
    for(int j =0;j<5;j++){
        cout<<"*"<< j;
    }
    cout<<endl;
}




//     for(int i=0;i < 5;i ++){
//     for(int j =5;j>0;j--){
//         cout<<"*"<< j*i;
//     }
//     cout<<endl;
// }




//QUE-4
//Print:-

/*
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/

//CODE:-1

// for (int i = 0 ; i<=5;i++)
//{
// char name = 'a' + (i-1);

// for(int j=1;j<=5;j++)
//{
//  cout<<name<<" ";
// }
//  cout<<endl;
// }


//CODE:-2
// for (int i = 0 ; i<=5;i++){
//     for(char name='a';name <='e';name++){       
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }


//QUE-5
//Print:-

/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20
21 22 23 24 25
*/

//CODE:-

//   int count = 1;
// for (int i = 1 ; i<=5;i++){
//     for(int j =1;j<=5;j++){    
//        cout<<count<<" ";
//        count++;
//     }
//     cout<<endl;
// }



return 0;
}