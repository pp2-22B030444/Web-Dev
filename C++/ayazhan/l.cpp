#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int x, y=0;
    cin >> x;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(x<a[i][j]){
                y++;
            }
        }
    }
    if(y==0){
        cout << "No penalty for today.";
    }
    else{
        cout << "Penalty!";
    }
}