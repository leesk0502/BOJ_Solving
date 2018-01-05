#include <cstdio>

int max(int a, int b){
  return a > b ? a : b;
}
int main(){
  int n, a[501][501];
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(int i=1; i<n; i++){
    for(int j=0; j<i+1; j++){
      if( j == 0 ) a[i][j] += a[i-1][j];
      else if( j == i ) a[i][j] += a[i-1][j-1];
      else {
        a[i][j] += max( a[i-1][j-1], a[i-1][j] );
      }
    }
  }
  int result = 0;
  for(int i=0; i<n; i++){
    result = max(a[n-1][i], result);
  }
  printf("%d", result);


  return 0;
}
