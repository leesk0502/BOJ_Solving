#include <cstdio>
#include <stdlib.h>

#define MAXN 65536
void sort(int *a, int n){
  int c[MAXN]= {0,}, cSum[MAXN+1]= {0,};
  int *b = (int*) malloc((n+1)*sizeof(int));
  for(int i=0; i<n; i++){
    c[a[i]]++;
  }
  cSum[0] = c[0];
  for(int i=1; i<=MAXN; i++){
    cSum[i] = cSum[i-1] + c[i];
  }
  for(int i=n-1; i>=0; i--){
    b[cSum[a[i]]--] = a[i];
  }
  for(int i=1; i<n; i++){
    a[i-1] = b[i];
  }
  free(b);
}

int find_mid(int *a, int k, int start){
  int *b = (int *) malloc(k * sizeof(int));
  for(int i=start, j=0; i<start+k; i++)
      b[j++] = a[i];
  sort(b, k);
 
  return b[ (k+1)/2 - 1 ];
}
int main(){
  int n, k;
  scanf("%d %d", &n, &k);

  int *a = (int *) malloc(n * sizeof(int));

  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

  int r = 0;
  for(int i=0; i<n-k+1; i++){
    r += find_mid(a, k, i);
  }

  printf("%d", r);
  return 0;

}
