#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
   int t; cin >> t;
   int a[10001] = {0,}, top = 0;

   while(t--){
     string s;
     cin >> s;
     if( s.compare("push") == 0 ){
       int d;
       cin >> d;
       a[top++] = d;
     } else if( s.compare("top") == 0 ){
       if(top == 0){
         printf("-1\n");
         continue;
       }
       printf("%d\n", a[top-1]);
     } else if( s.compare("pop") == 0 ){
       if(top == 0){
         printf("-1\n");
         continue;
       }
       printf("%d\n", a[top-1]);
       top--;
     } else if( s.compare("size") == 0 ){
       printf("%d\n", top);
     } else if( s.compare("empty") == 0 ){
       printf("%d\n", top == 0 ? 1 : 0 );
     }
   }
   return 0;
}
