#include <iostream>
#include <cmath>
using namespace std;

int bishopMaxMove(int a, int b){
  int count = 0;

  //chess board => 8*8 ~> 8 row and 8 col

  count+= min(8-a,8-b); //==>8th row and 8th col

  count+= min(8-a,b-1); //==>8th row and 1st col

  count+= min(a-1,8-b); //==>1st row and 8th col

  count+= min(a-1,b-1); //==>1st row and 1st col

  return count; 
}

int main(){

  int row,col;
  cout<<"Enter a position on Row : "<<endl;
  cin>>row;
  cout<<"Enter a position on col : "<<endl;
  cin>>col;

cout<<bishopMaxMove(row,col);

return 0;
}