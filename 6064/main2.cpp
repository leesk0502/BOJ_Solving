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
  int T;
  cin >> T;
  while(T--){
    int m, n, x, y;
    cin >> m >> n >> x >> y;
    int lcd = getLCD(m, n);
    while(x!=y && x <= lcd){
      if(x<y) x+=m;
      else    y+=n;
    } 
    if(x!=y) cout << -1 << endl;
    else     cout << x << endl;
  }
  return 0;
}
