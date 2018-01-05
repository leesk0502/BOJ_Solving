#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

void swap(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}
void sift_up(vector<int> &v, int root, int cur){
  int parent;

  while( cur > root ){
    parent = (cur-1) / 2;
    if( v[parent] >= v[cur] )
      return ;

    swap(v[parent], v[cur]);
    cur = parent;
  }
}
void sift_down(vector<int> &v, int root, int last){
  int cur = root;
  int max = cur;
  while( cur*2 + 1 <= last ){
    int lc = cur*2 + 1;
    int rc = cur*2 + 2;
    if( v[lc] >= v[max] ) max = lc;
    if( rc <= last && v[rc] >= v[max] ) max = rc;
    if( max != cur ){
      swap(v[max], v[cur]);
      cur = max;
    } else{
      return;
    }
  }
}
void heapify(vector<int> &v, int len){
  int end = 1;
  while(end < len){
    sift_up(v, 0, end++);
  }
}
void heap_sort(vector<int> &r, vector<int> &v, int len){
  if(v.size() == 0 || len <= 1) return;

  heapify(v, len);

  int end = len - 1;
  while(end > 0){
    r.push_back(v[0]);
    swap(v[0], v[end--]);
    sift_down(v, 0, end);
  }
}

int main(){
  int N, i=0;
  cin >> N;
  vector<int> v(N);
  for(i=0; i<N; i++)
    scanf("%d", &v[i]);

  vector<int> r;
  heap_sort(r, v, N);
  for(i=0; i<v.size(); i++)
    printf("%d\n", v[i]);
  return 0;
}
