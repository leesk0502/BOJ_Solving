#include <cstdio>
#include <deque>

using namespace std;
int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  deque<int> q, p;
  for(int i=1; i<=n; i++){
    q.push_back(i);
  }

  int index = m;
  while(!q.empty()){
    for(int i=0; i<m-1; i++){
      int t = q.front();
      q.pop_front();
      q.push_back(t);
    }
    p.push_back(q.front());
    q.pop_front();
  } 
  printf("<");
  for(int i=0; i<p.size()-1; i++){
    printf("%d, ", p[i]);
  }
  printf("%d>", p.back());

  return 0;
}
