#include <iostream>
#include <vector>

using namespace std;

int main(){
  int m, n;
  cin >> m >> n;

  int che[10001];

  for(int i=0; i<=10000; i++){
    che[i] = i;
  }
  che[0] = -1;
  che[1] = -1;

  for(int i=2; i<=10000; i++){
    for(int j=i*i; j<=10000; j+=i){
      che[j] = -1;
    }
  }

  int min=0, sum=0;
  for(int i=m; i<=n; i++){
    if( che[i] != -1 ){
      sum += che[i];
      if( min == 0 ){
        min = che[i];
      }
    }
  }
  if(sum == 0){
    cout << -1;
  } else {
    cout << sum << endl << min;
  }
}
