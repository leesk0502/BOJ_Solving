#include<cstdio>

int a[10], x, r;
int main(){
  while(~scanf("%1d", &x)) a[x]++;
  a[6] = (a[6] + a[9] + 1) / 2;
  for(int i=1; i<10; i++) if(a[r] < a[i]) r = i;
  printf("%d", a[r]);
  return 0;
}
