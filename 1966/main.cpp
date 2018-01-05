#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

class node{
  public:
  int index;
  int pri;

  node(int i, int p){
    this->index = i;
    this->pri = p;
  }
};

int main(){
  int T;

  cin >> T;

  while(T--){
    int n, m;
    cin >> n >> m;

    deque<node> q;
    int a;
    for(int i=0; i<n; i++){
      cin >> a;
      q.push_back(node(i, a));
    }

    int count = 0;
    while(!q.empty()){
      node t = q.front();
      q.pop_front();
      bool isEnd = true;
      for(int j=0; j<q.size(); j++){
        if( t.pri < q[j].pri ){
          q.push_back(t);
          isEnd = false;          
          break;
        }
      }
      if( isEnd ) {
        count++;
      }
      if( t.index == m && isEnd ) break;
    }

    cout << count << endl;
  }
  return 0;
}
