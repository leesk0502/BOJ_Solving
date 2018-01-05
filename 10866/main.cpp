#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
using namespace std;

int main(){
  int n, a;
  cin >> n;
  deque<int> q;
  while(n--){
    string s;
    cin >> s;
    if( s.compare("push_back") == 0 ){
      cin >> a;
      q.push_back(a);
    } else if( s.compare("push_front") == 0 ){
      cin >> a;
      q.push_front(a);
    } else if( s.compare("pop_back") == 0 ){
      if( q.size() == 0 ) cout << -1 << endl;
      else{
        printf("%d\n", q.back());
        q.pop_back();
      }
    } else if( s.compare("pop_front") == 0 ){
      if( q.size() == 0 ) cout << -1 << endl;
      else{
        printf("%d\n", q.front());
        q.pop_front();
      }
    } else if( s.compare("front") == 0 ){
      if( q.size() == 0 ) cout << -1 << endl;
      else
        printf("%d\n", q.front());
    } else if( s.compare("back") == 0 ){
      if( q.size() == 0 ) cout << -1 << endl;
      else  
        printf("%d\n", q.back());
    } else if( s.compare("size") == 0 ){
      printf("%d\n", q.size());
    } else if( s.compare("empty") == 0 ){
      printf("%d\n", q.empty());
    }
  }
  return 0;
}
