#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;
int main(){
  int n;

  vector<int> t;
  vector<int> ans;
  while(1){
    cin >> n;
    if( n == 0 ) break;
    n*=2;
    n++;
    t.push_back(n);
  }

  for(int x=0; x<t.size(); x++){
    n = t[x];
    int *a = (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
      a[i] = i;

    a[0] = -1;
    a[1] = -1;

    for(int i=2; i<sqrt(n); i++){
      if(a[i] == -1) continue;
      for(int j=i*i; j<n; j+=i){
        a[j] = -1;
      }
    }

    int cnt = 0;
    for(int i=(n+1)/2; i<n; i++){
      if(a[i] != -1){
        cnt++;
      }
    }
    ans.push_back(cnt);
  }
  for(int i=0; i<ans.size(); i++){
    printf("%d\n", ans[i]);
  }
  return 0;
}
