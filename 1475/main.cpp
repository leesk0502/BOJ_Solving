#include <iostream>
#include <vector>

using namespace std;

int main(){
  int set[] = {0, 1, 2, 3, 4, 5, 6, 7, 8 ,9};
  int n = 0;
  cin >> n;

  vector<int> v(10);
  while(n > 0){
    int c = n % 10;
    n /= 10;

    if( c == 6 || c == 9 ){
      if( v[6] == v[9] ){
        v[6]++;
      } else if( v[6] > v[9] ){
        v[9]++;
      } else if( v[6] < v[9] ){
        v[6]++;
      }
    } else {
      v[c]++;
    }
  }

  int max = 0;
  int max_idx = 0;
  for(int i=0; i<10; i++){
    if( max < v[i] ) {
      max = v[i];
      max_idx = i;
    }
  }

  cout << max;

}
