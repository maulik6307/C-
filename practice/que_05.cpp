#include <iostream>
using namespace std;



//if we called number which is divided by 4 then you are not going to win {here both player only make maximum three moves}
// for example :- oposition player called->1,2 then you have to called->3
                 

bool nimGame(int n){

  if(n%4==0){
    return 0;
  }else{
    return 1;
  }

}

int main(){

cout<<nimGame(4);

return 0;
}