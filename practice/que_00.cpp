#include <iostream>
using namespace std;
int main()
{

  // ADD DIGIT

  // int num;

  // cout << "Enter a number : ";
  // cin >> num;

  // while (num > 9)
  // {
  //   int ans = 0, rem;
  //   while (num != 0)
  //   {
  //     rem = num % 10;
  //     num /= 10;
  //     ans += rem;
  //   }
  //   num = ans;
  // }
  // cout << num;



//LEAP YEAR

// int y;
// cout<<"Enter a year :";
// cin>>y;

// if(y%400==0){
//   cout<<"Leap Year";
// }
// else if(y%4==0 && y%100!=0)
// {
//   cout<<"Leap Year";
// }
// else{
//   cout<<"Not a leap year";
// }



//REVERSE INTEGER

// int num;
// cout<<"Enter a number : ";
// cin>>num;

// int ans=0,rem;
// while(num!=0)
// {
//   rem=num%10;
// num/=10;
// if(ans>INT64_MAX/10 || ans<INT64_MIN/10){return 0;}
// ans=ans*10+rem;
// }
// cout<<ans;


//POWER OF 2

// int num;
// cout<<"Enter a number : ";
// cin>>num;

// if(num<1) return 0;

// while (num != 1) 
// {
//   if(num%2 == 1) return 0;

//   num = num/2;
// }

//   return 1;
// }


//SQRT OF NUMBER

// int num;
// cout<<"Enter a number :";
// cin>>num;
// int ans=1;
// int i=1;

// if(num<0) return 0;
// if (num == 0 || num == 1)
//         return num;

// while (ans<=num)
// {
//   i++;
//   ans=i*i;
// }
// return i-1;


//PALINDROME NUMBER

//suppose i have number :- 121 then it's reverse is also 121 => this is palindrome number 


// int num;
// cout<<"Enter a number :";
// cin>>num;

// int ans=0,rem;

// if(num<0) return 0;

// while (num)
// {
//   rem = num%10;
//   num /= 10;
// if(ans>INT64_MAX/10) return 0;

//   ans = ans*10 + rem;
// }

// if(ans == num) return 1;
// else return 0;


//COMPLEMENT OF A NUMBER BASED ON BASE 10

//=> number :- 5 => binary value = 101
//                  complement   = 010 => 2

//=> number :- 27 => binary value = 11011
//                   complement   = 00100 => 4


// int num;
// cout<<"Enter a number : ";
// cin>>num;
//  int rem,ans=0,mul=1;



// if(num==0) return 1;

// while (num)
// {
 

//   rem=num%2;
//   rem=rem^1;
//   num=num/2;
//   ans=ans+rem*mul;
//   mul=mul*2;
// }

// return ans;



}