#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}
void quick(vector<int> &v, int left, int right){
   int pivot = left;
   int i = left+1;
   int j = pivot;

   if( left < right ){
     for(; i<=right; i++){
       if( v[i] < v[pivot] ){
         j++;
         swap(v[i], v[j]);
       }
     }
     swap(v[pivot], v[j]);
     pivot = j;

     quick(v, left, pivot-1);
     quick(v, pivot+1, right);
   }
}
int main(){
  int N, i=0;
  cin >> N;
  vector<int> v(N);
  while(N--) cin >> v[i++];

  quick(v, 0, v.size()-1);
  for(i=0; i<v.size(); i++)
    cout << v[i] << endl;
  return 0;
}
