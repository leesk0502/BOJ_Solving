#include <cstdio>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int dp[301], in[301];
int main(){
  int n;
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &in[i]);
  }
  dp[0] = in[0];

  for(int i=1; i<n; i++){
    if( i == 1 ) dp[i] = MAX(dp[i-1] + in[i], in[i]);
    else if( i == 2) dp[i] = MAX(dp[i-2] + in[i], in[i-1] + in[i]);
    else dp[i] = MAX(dp[i-2] + in[i], dp[i-3] + in[i-1] + in[i]);
  }
  printf("%d", dp[n-1]);
  return 0;
}
