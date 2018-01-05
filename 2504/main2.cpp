#include <cstdio>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int get(string s){
  if( s.compare("()") == 0 ) return 2;
  if( s.compare("[]") == 0 ) return 3;
  if( s.length() == 0 ) return 1;
  if( s.length() == 1 ){
    printf("0"); exit(1);
  }

  // (()[])  
  // ()(), ()[], [](), [][], (), []
  int sum = 0;
  vector<char> v;
  string re = "";
  for(int i=0; i<s.length(); i++){
    char c = s.at(i);
    re += c;
    if( c == '(' || c == '[' ){
      v.push_back(c);
    }
    else if( c == ')' ){
      if( v.back() == '(' ) v.pop_back();
      if( v.size() == 0 ) {
        sum += 2 * get(re.substr(1, re.length() - 2));
        re = "";
      }
    }
    else if( c == ']' ){
      if( v.back() == '[' ) v.pop_back();
      if( v.size() == 0 ) {
        sum += 3 * get(re.substr(1, re.length() - 2));
        re = "";
      }
    }
  }

  return sum;
}

int main(){
  string s;
  cin >> s; 
  
  printf("%d", get(s));
  return 0;
}
