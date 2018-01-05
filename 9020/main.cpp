#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;
int main(){
  int t, n;
  scanf("%d", &t);

  const int max = 10001;
  int che[max];
  vector<int> v;
  for(int i=0; i<max; i++){
    che[i] = i;
  }
  che[0] = -1;
  che[1] = -1;
  for(int i=2; i<max; i++){
    if(che[i] == -1) continue;
    for(int j=i*i; j<max; j+=i){
      che[j] = -1;
    }
  }
  for(int i=0; i<max; i++){
    if(che[i] != -1){
      v.push_back(che[i]);
    }
  }

  int ans[10001][2];
  int a, b, min_diff=10000, min_a, min_b;
  for(int k=4; k<=10000; k+=2){
    for(int i=0; i<v.size(); i++){
      a = v[i];
      for(int j=0; j<=i; j++){
        b = v[j];
        if( a + b == k ){
          if( abs(b - a) < min_diff ){
            min_diff = abs(b - a);
            min_a = a;
            min_b = b;
          }
        }
      }
    }
    if( min_a > min_b ){
      ans[k][0] = min_b;
      ans[k][1] = min_a;
    }else{
      ans[k][0] = min_a;
      ans[k][1] = min_b;
    }
  }
  vector<int> in;
  while(t--){
    scanf("%d", &n);
    in.push_back(n);
  }
  for(int i=0; i<in.size(); i++){
    printf("%d %d\n", ans[in[i]][0], ans[in[i]][1]); 
  }
  return 0;
}
