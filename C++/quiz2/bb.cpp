#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >>n>>m;
    int a[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            a[i][j]=1;
        }
    }
    int b;
    cin>>b;
    int x1,y1,x2,y2;
    for (int k=0; k<b; k++){
        cin>> x1>>y1>>x2>>y2;
    for (int i=y1; i<y2; i++){
        for (int j=x1; j<x2; j++){   
            a[i][j]=0;}}}
    int s=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            s+=a[i][j];}}
            cout << s;}