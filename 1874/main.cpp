#include <cstdio>
#include <stdlib.h>
#include <vector>

using namespace std;

int sta[100001];
int pos;
void push(int n){
  sta[pos++] = n;
}
int pop(){
  if(pos>0)  return sta[--pos];
  else return -1;
}
int top(){
  if(pos>0) return sta[pos-1];
  else return -1;
}
int main(){
  int n;
  scanf("%d", &n);
  int *arr = (int *) malloc(n * sizeof(int));
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int j=0;
  vector<char> result;
  for(int i=1; i<=n; i++){
    if( i <= arr[j] ){
      push(i);
      result.push_back('+');
    } else {
      while( j < n && top() == arr[j] ){
        j++;
        pop();
        result.push_back('-');
      }
      push(i);
      result.push_back('+');
    }
  }
  while( j < n && top() == arr[j] ){
    j++;
    pop();
    result.push_back('-');
  }
  
  if(top() != -1){
    printf("NO\n");
  } else{
    for(int i=0; i<result.size(); i++){
      printf("%c\n", result[i]);
    }
  }
  return 0;

}
