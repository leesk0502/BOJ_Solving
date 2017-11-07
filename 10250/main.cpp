#include <iostream>
#include <math.h>

using namespace std;
int main(){
  int T;
  cin >> T;

  for(int i=0; i<T; i++){
    int H, W, N;
    cin >> H >> W >> N;

    int f = N % H == 0 ? H : N % H;
    int r = ceil((double)N / H); 

    cout << f;
    if( r < 10 ) cout << "0" << r;
    else cout << r;
    cout << endl;
  }

  return 0;
}
