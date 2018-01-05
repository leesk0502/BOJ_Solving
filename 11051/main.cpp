#include <cstdio>
#include <climits>
int mem[1001][1001];
int hang(int n, int k){
  if( n == k || k == 0 ) return 1;

  if(mem[n][k]) return mem[n][k];
  return mem[n][k] = (hang(n-1, k-1) + hang(n-1, k)) % 10007;
}
int main(){
  int n, k;
  scanf("%d%d", &n, &k);

  printf("%d", hang(n, k));
  return 0;
}

