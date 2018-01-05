#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    vector<char> v;
    bool isNotPS = false;
    for(int i=0, len = s.length(); i<len; i++){
      char c = s.at(i);
      if( c == '(' ){
        v.push_back('(');
      } else if( c == ')' ){
        if( v.size() > 0 && v.back() == '(' ){
          v.pop_back();
        } else {
          isNotPS = true;
          break;
        }
      }
    }
    if( v.size() == 0 && !isNotPS ) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
