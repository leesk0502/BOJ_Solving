#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
  int n, v[10001] = {0,}, front = 0, rear = 0, d = 0;
  cin >> n;

  while(n--){
    string s;
    cin >> s;
    if( s.compare("push") == 0 ){
      cin >> d;
      v[rear++] = d;
    }
    else if( s.compare("pop") == 0 ){
      if( front == rear ) {
        printf("-1\n");
        continue;
      }
      d = v[front++];
      printf("%d\n", d);
    }
    else if( s.compare("size") == 0 ){
      printf("%d\n", rear-front);
    }
    else if( s.compare("empty") == 0 ){
      if( front == rear ) printf("1\n");
      else printf("0\n");
    }
    else if( s.compare("front") == 0 ){
      if( front == rear ){
        printf("-1\n");
        continue;
      }
      printf("%d\n", v[front]);
    }
    else if( s.compare("back") == 0 ){
      if( front == rear ){
        printf("-1\n");
        continue;
      }
      printf("%d\n", v[rear-1]);
    }
  }

  return 0;
}
