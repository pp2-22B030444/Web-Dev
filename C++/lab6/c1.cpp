
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,cnt=0;
    cin >> n;
    int b[n];
    for (int i=1;i<=n;i++){
            cin >> b[i];}
    cin >> x;
    for (int i=0;i<3;i++){ 
            if(b[i]){
             cnt++;}}
             if (cnt=1){
            cout << "YES";}
             else {        
            cout << "NO";}
                }