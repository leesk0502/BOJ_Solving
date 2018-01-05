#include <cstdio>
#include <stdlib.h>
#include <vector>

using namespace std;

void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void sort(int *a, int left, int right){
  int pivot = left;
  int j = pivot;
  int i = left + 1;

  if( left < right ){
    for(; i<=right; i++){
      if( a[i] < a[pivot] ){
        j++;
        swap(&a[i], &a[j]);
      }
    }
    swap(&a[j], &a[pivot]);
    pivot = j;

    sort(a, left, pivot - 1);
    sort(a, pivot + 1, right);
  }
}
int find_mid(int *a, int k, int start){
  int *b = (int *) malloc(k * sizeof(int));
  for(int i=start, j=0; i<start+k; i++)
      b[j++] = a[i];
  sort(b, 0, k-1);
  return b[ (k+1)/2 - 1 ];
}

int main(){
  int n, k;
  scanf("%d %d", &n, &k);

  int *a = (int *) malloc(n * sizeof(int));

  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

  int r = 0;
  for(int i=0; i<n-k+1; i++){
    r += find_mid(a, k, i);
  }

  printf("%d", r);
  return 0;
}
