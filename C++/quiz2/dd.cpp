#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int b[1001];
    cin>> n;
    int a[n];
    int max=-1000;
     for (int i=0; i<1001; i++){
     b[i]=0;
     }
    for (int i=0; i<n; i++){
        cin>> a[i];
    }
    
    for (int i=0; i<n; i++){
        b[a[i]]++;
       }
    for (int i = 0; i <1001 ; i++){
        if ( max < b[i]){
            max = b[i];
        }
    }
   for (int i = 1001; i >= 0; i--){
        if(max == b[i]){
            cout << i <<" ";}}}