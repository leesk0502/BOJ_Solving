#include <cstdio>
#include <stdlib.h>
#include <math.h>

int main(){
  int m, n;
  scanf("%d %d", &m, &n);

  n += 1;
  int *che = (int *) malloc(n * sizeof(int));
  for(int i=0; i<n; i++)
    che[i] = i;

  che[0] = -1;
  che[1] = -1;

  for(int i=2; i<sqrt(n); i++){
    if(che[i] == -1) continue;
    for(int j=i*i; j<n; j+=i){
      che[j] = -1;
    }
  }

  for(int i=m; i<n; i++){
    if( che[i] != -1 ){
      printf("%d\n", che[i]);
    }
  }
  return 0;
}
