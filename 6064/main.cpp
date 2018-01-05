#include <iostream>

using namespace std;
int getLCD(int a, int b){
  int z, x = a, y = b;
  while(true){
    z = x % y;
    if( z == 0 ) break;
    x = y;
    y = z;
  }
  int gcd = y;
  return (a * b) / gcd;
}
int main(){
  int M, N, x, y, T;

  cin >> T;

  for(int t=0; t<T; t++){
    cin >> M >> N >> x >> y;

    int p=1, q=1, year=1;
    int lcd = getLCD(M, N);
    
    int i = 0;
    for( i=0; i<lcd; i++){
      p++; q++; year++;
      if( p > M ) p = 1;
      if( q > N ) q = 1;
      if( p == x && q == y ) break;
    }
    if( i == lcd ) year = -1;
    cout << year << endl;
  }

}
