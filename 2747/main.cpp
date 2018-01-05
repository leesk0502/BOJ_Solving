#include <cstdio>

int main(){
  int n, a=0, b=1, sum=0;
  scanf("%d", &n);

  if( n == 0 ) printf("0");
  if( n == 1 ) printf("1");
  if( n == 0 || n == 1 ) return 0;
  for(int i=2; i<=n; i++){
    sum = a + b;
    a = b;
    b = sum;
  }
  printf("%d", b);
  return 0;
}

