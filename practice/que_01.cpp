#include <iostream>
using namespace std;

//a->97
//A->65

//If we enter: m then
// ans = m-a+A
//     = 109-97+65 ===>ASCII VALUE
//     = 77 
//     = M


char convert(char name){
  char ans = name-'a'+'A';
  return ans;
}

int main(){
char name;
cout<<"please Enter a Character : "<<endl;
cin>>name;
cout<<convert(name)<<endl;
return 0;
}