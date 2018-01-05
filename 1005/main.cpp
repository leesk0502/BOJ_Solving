#include <cstdio>

int m[1001][1001];
int d[1001];
int dp[1001][1001];
int main(){
  int T;
  scanf("%d", &T);

  while(T--){
    int n, k;
    scanf("%d %d", &n, &k);
    
    for(int i=1; i<=n; i++){
      scanf("%d", &d[i]);
    }
    for(int i=0; i<k; i++){
      int r, c;
      scanf("%d %d", &r, &c);
      m[r][c] = 1;
    } 
    int w;
    scanf("%d", &w);

    dp[1][1] = d[1];
    for(int i=2; i<=n; i++){
      for(int j=i; j<=n; j++){
        if( m[i][j] != 1 ) continue;
        
      }
    }
  }
  return 0;
}
