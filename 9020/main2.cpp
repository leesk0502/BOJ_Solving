#include <stdio.h>
#define SIZE 10001

int che[SIZE];

int eratos(){
  for(int i=2; i*i < SIZE; i++){
    if(!che[i]){
      for(int j=i*i; j<SIZE; j+= i){
        che[j]=1;
      }
    }
  }
  che[1] = 1;
}

void goldBach(int n){
  int i, j, mid = n >> 1;
  for( i = j = mid; i <= n; i--, j++){
    if(!che[i] && !che[j]){
      printf("%d %d\n", i, j);
      return;
    }
  }
}

int main(){
  eratos();
  int n, t;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    goldBach(n);
  }
  return 0;
}
