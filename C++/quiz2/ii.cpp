#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k, max = INT_MIN;
    cin >> n;
    int a[n][n];
    
    for(int i = 0; i < n; i++){
     for(int j = 0; j < n; j++){
      cin >> a[i][j];
  }
 }
 int b[n];
    for(int i = 0; i < n; i++){
     for(int j = 0; j < n; j++){
      if(a[i][j]> max){
       max = a[i][j];}}
   b[i]= max;
   max = INT_MIN;
      }
  for(int i = 0; i < n; i++){
   for(int j = 0; j < n; j++){
    cout << b[i] <<" ";
   }
   cout << endl;
  }
    
return 0;
}