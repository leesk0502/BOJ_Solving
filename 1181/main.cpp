#include <string>
#include <cstdio>
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

set<string> a;
vector<string> b;
bool comp(string a, string b){
  if(a.size() > b.size()) return false;
  else if(a.size() == b.size() && a.compare(b) > 0 ) return false;

  return true;
}
int main(){
  int n;
  scanf("%d", &n);  

  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    a.insert(s); 
  }

  set<string>::iterator ai;
  for(ai=a.begin(); ai!=a.end(); ai++){
    b.push_back(*ai);
  }

  sort(b.begin(), b.end(), comp);

  for(int i=0; i<b.size(); i++){
    printf("%s\n", b[i].c_str());
  }



  return 0;
}
