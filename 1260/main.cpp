#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
int chk[1001], chk2[1001];
int n;

queue<int> q;
void dfs(int node){
  if( chk[node] ) return;
  chk[node] = 1;
  printf("%d ", node);
  for(int i=1; i<=n; i++){
    if( i != node && map[node][i] && !chk[i] ){
      dfs(i);
    }
  } 
}
void bfs(int start){
  q.push(start);

  while(!q.empty()){
    int node = q.front();
    q.pop();
    if( chk2[node] ) continue;
    printf("%d ", node);
    chk2[node] = 1;
    for(int i=1; i<=n; i++){
      if( i != node && map[node][i] && !chk2[i] ){
        q.push(i);
      }
    }
  }
}
int main(){
  int m, v;
      
  cin >> n >> m >> v;

  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    map[a][b] = 1;
    map[b][a] = 1;
  }

  dfs(v);
  printf("\n");
  bfs(v);

  return 0;
}
