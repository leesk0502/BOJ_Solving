#include <cstdio>
#include <stdlib.h>
#define MAXNUM 10001
int main(){
  int N;
  scanf("%d", &N);

  int *a = (int*) malloc(N * sizeof(int));
  int *b = (int*) malloc((N+1) * sizeof(int));
  int c[MAXNUM], cSum[MAXNUM];
  for(int i=0; i<MAXNUM; i++){
    c[i] = 0;
  }
  for(int i=0; i<N; i++){
    scanf("%d", &a[i]);
    c[a[i]]++;
  }

  cSum[0] = c[0];
  for(int i=1; i<MAXNUM; i++){
    cSum[i] = cSum[i-1] + c[i];
  }
  
  for(int i=N-1; i>=0; i--){
    b[cSum[a[i]]] = a[i];
    cSum[a[i]]--;
  }
  for(int i=1; i<=N; i++){
    printf("%d\n", b[i]);
  }

  return 0;
}
