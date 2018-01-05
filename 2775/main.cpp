#include <iostream>
#include <memory.h>
#include <stdlib.h>
using namespace std;

int memo[15][15];

int getPeopleCnt(int k, int n){
  if( k == 0 )
    return n;

  if(memo[k][n] != -1)
    return memo[k][n];

  int peopleCount = 0;
  for(int i=1; i<=n; i++){
    peopleCount += getPeopleCnt(k-1, i);
  }
  memo[k][n] = peopleCount;

  return peopleCount;
}
int main(){
  int T;
  cin >> T;

  int k, n;
  int *answer = (int*) malloc (sizeof(int) * T);
  memset(memo, -1, sizeof(memo));
  for(int tc=0; tc<T; tc++){
    cin >> k >> n;
    answer[tc] = getPeopleCnt(k, n);
  }

  for(int tc=0; tc<T; tc++){
    cout << answer[tc] << endl;
  }
  return 0;
}
