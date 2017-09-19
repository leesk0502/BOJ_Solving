/**
 *  백준 온라인 저지 1193 분수찾기
 *
 *  @see https://www.acmicpc.net/problem/1193
 *  @author leesk0502
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){
  int in;

  cin >> in;
  
  int a = 0;
  int t = 1, b = 1;
  for(int i=1; i<=in; i++){
    a += i;
    if( a - i <= in && in <= a ){
      t = i - ( a - in );
      b = 1 + ( a - in );
      if( (i%=2) == 1 ){
        int temp = t;
        t = b;
        b = temp;
      }
      break;
    }
  }  

  cout << t << "/" << b;

}
