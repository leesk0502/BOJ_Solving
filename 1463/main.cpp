#include <cstdio>
#define MAXINT 1000001
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
int dp[MAXINT];
int step(int n){
  if( n < 1 ) return 0;
  if( n <= 3 ) return 1;
  if( dp[n] ) return dp[n];

  int a=MAXINT, b=MAXINT, c=MAXINT;
  a = step(n - 1);
  if((n % 3) == 0) b = step(n/3);
  if((n % 2) == 0) c = step(n/2);

  return dp[n] = MIN(a, MIN(b, c)) + 1;
}

int main(){
  int n;
  scanf("%d", &n);
  
  printf("%d", step(n));
  return 0;
}
