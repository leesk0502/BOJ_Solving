#include <cstdio>

int a, b;
int fibo(int n){
  if( n == 0 ) {
    a++;
    return 0;
  }
  if( n == 1 ) {
    b++;
    return 1;
  }
  return fibo(n-1) + fibo(n-2);
}

int main(){
  int T;
  scanf("%d", &T);

  while(T--){
    int n;
    a = 0; b = 0;
    scanf("%d", &n);

    fibo(n);
    printf("%d %d\n", a, b);
  }
  return 0;
}
