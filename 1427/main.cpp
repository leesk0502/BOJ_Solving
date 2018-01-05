#include <cstdio>

int main(){
  int n;
  scanf("%d", &n);

  int a[10]={0,}, cnt = 0;;
  while(n>0){
    int c = n % 10;
    n /= 10;
    a[c]++;
    cnt++;
  }

  int t = 9;
  while(t>-1){
    if( a[t] > 0 ){
      printf("%d", t);
      a[t]--;
    } else{
      t--;
    }
  }
  return 0;
}
