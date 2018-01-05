#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){
  string s;
  cin >> s; 
  vector<char> v, d;
  for(int i=0; i<s.length(); i++){
    char c = s.at(i);
    if( c == '(' ) {
      v.push_back(c);
    }
    else if( c == '[' ) {
      v.push_back(c);
    }
    else if( c == ')' ){
      if( v.back() != '(' ) break;
      v.pop_back();
      d.push_back('2');
    }
    else if( c == ']' ){
      if( v.back() != '[' ) break;
      v.pop_back();
      d.push_back('3');
      d.push_back(')');
    }
  }
  if( v.size() > 0 ) printf("0");
  else {
    for(int i=0; i<d.size(); i+=2){
      char a[2] = {d[i], d[i+1]};
      if( c == '(' ){
        v.push_back('(');
      }
      else if( c == ')' ){

      }
    }
  }

  
  return 0;
}
