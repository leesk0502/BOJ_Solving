#include <cstdio>

int min(int a, int b){
  return a < b ? a : b;
}
int main(){
  int n, d[1001][3] = {0,}, a[1001][3] = {0,};
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    for(int j=0; j<3; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(int i=1; i<=n; i++){
    d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
    d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
    d[i][2] = min(d[i-1][0], d[i-1][1]) + a[i][2];
  }
  
  printf("%d", min(min(d[n][0], d[n][1]), d[n][2]));

  return 0;
}
