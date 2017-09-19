/**
 *  백준 온라인 저지 2292 벌집
 *
 *  @see https://www.acmicpc.net/problem/2292
 *  @author leesk0502
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){
  int in;
  cin >> in;

  int a = 6;
  int b = 1;
  int i=1;
  while(in > b){
    b += a;
    a += 6;
    i++;
  }

  cout << i;
}
