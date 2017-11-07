#include <iostream>
#include <math.h>
using namespace std;

int main(){

  int T;
  cin >> T;

  for(int i=0; i<T; i++){
    long long x, y;
    cin >> x >> y;

    long long dist = y - x;
    long long n = (long long) sqrtl(dist);
    long long remain = dist - n * n;
    long long count = (2 * n - 1) + ceil( (double) remain / n );
    
    cout << count << endl;
  }

  return 0;
}
