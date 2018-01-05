#include <cstdio>

bool q[1001];
int main(){
  int N, i, j;
  scanf("%d", &N);
  while(N--){
    scanf("%d", &j);
    q[j] = true;
  }
  for(i = 0; i<1001; i++){
    if(q[i]) printf("%d\n", i);
  }
  return 0;
}
