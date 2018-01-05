#include <iostream>
#include <deque>

using namespace std;

int main(){
  int n, m, T=0; 
  cin >> n >> m;

  deque<int> q;
  for(int i=1; i<=n; i++){
    q.push_back(i);
  }

  int count=0;
  while(m--){
    int a;
    cin >> a;

    int pos=0;
    for(int i=0; i<q.size(); i++){
      if( a == q[i] ) pos = i;
    }
    int left = pos;
    int right = q.size() - pos - 1;
    if( left <= right ){
      while(q.front() != a){
        int b = q.front();
        q.pop_front();
        q.push_back(b);
        count++;
      }
    } else {
      while(q.front() != a){
        int b = q.back();
        q.pop_back();
        q.push_front(b);
        count++;
      }
    }
    q.pop_front();
  }
  cout << count;
  return 0;
}
