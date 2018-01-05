#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> v(N);
  for(int i=0; i<N; i++){
    cin >> v[i];
  }

  for(int i=0; i<N-1; i++){
    int tmp = i;
    for(int j=i+1; j<N; j++){
      if(v[tmp] >= v[j]) tmp = j;
    }
    int a = v[tmp];
    v[tmp] = v[i];
    v[i] = a;
  }
  for(int i=0; i<N; i++){
    cout << v[i] << endl;
  }
  return 0;
}
