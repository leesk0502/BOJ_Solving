#include <cstdio>

int main(){
  int n, k, a[10001] = {0, }, d[10001] = {0,};
  scanf("%d %d", &n, &k);

  for(int i=1; i<=n; i++){
    scanf("%d", &a[i]);
  }
  
  d[0] = 1; 
  for(int i=1; i<=n; i++){
    for(int j=a[i]; j<=k; j++){
      d[j] += d[j - a[i]];
    }
  }

  printf("%d", d[k]);
  

  return 0;
}
