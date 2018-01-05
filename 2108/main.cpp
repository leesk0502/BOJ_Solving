#include <cstdio>
#include <math.h>
#define MAXN 500001
int a[MAXN], b[MAXN+1], c[10000], cSum[MAXN+1];
int main(){
  int n;
  scanf("%d", &n);

  int sum = 0;
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    c[a[i]+4000]++;
    sum += a[i];
  }
  int mean = round(sum / (float)n);

  cSum[0] = c[0];
  for(int i=1; i<MAXN; i++){
    cSum[i] = cSum[i-1] + c[i];
  }
  
  int many = 0, idx = 0;
  for(int i=0; i<10000; i++){
    if(c[i] > many) {
      many = c[i];
      idx = i;
    }
  }
  int cnt = 0;
  for(int i=0; i<10000; i++){
    if( many == c[i] ){
      cnt++; 
    }
    if(cnt == 2) {
      idx = i;
      break;
    } 
  }
  many = idx - 4000;
  
  for(int i=n; i>=0; i--){
    b[cSum[a[i]+4000]] = a[i];
    cSum[a[i]+4000]--;
  }
  for(int i=1; i<=n; i++){
    printf("%d ", b[i]);
  }
  printf("\n");
  
  int mead = b[(n+1)/2];
  int range = b[n] - b[1];

  printf("%d\n", mean);
  printf("%d\n", mead);
  printf("%d\n", many);
  printf("%d", range);

  return 0;

}
