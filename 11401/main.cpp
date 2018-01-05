#include <cstdio>
#define M 1000000007

long long dp[4000001];
int main(){
  long long n, k;
  scanf("%lld%lld", &n, &k);

  dp[0] = 1;
  for(long long i=0; i<=n; i++){
    dp[i+1] = 1;
    for(long long j=i; j>0; j--)
      dp[j] = (dp[j] + dp[j-1]) % M; 
  }

  printf("%lld", dp[k]);

  return 0;
}

