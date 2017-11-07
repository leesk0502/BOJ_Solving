#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int n;

  cin >> n;

  vector<string> result;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;

    vector<char> v;
    for(int j=0; j<s.length(); i++){
      if( s.at(j) == '(' ){
        v.push_back(s.at(j));
      } else if( s.at(j) == ')' ){
        if( v.size() == 0 ){
          v.push_back(s.at(j));
          break;
        } 
        if( v.back() == '(' ){
          v.pop_back();
        }
      }
    }
    if( v.size() > 0 ){
      result.push_back("NO");
    } else {
      result.push_back("YES");
    }
  }
  for(int i=0; i<n; i++){
    cout << result[i] << endl;
  }
}
