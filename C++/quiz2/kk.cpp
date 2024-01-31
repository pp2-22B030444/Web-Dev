#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a[n],b[n];
    int m = 0;
     for (int i=0; i<n; i++){
        cin>> a[i];
    }
     for (int i=0; i<n; i++){
        cin>> b[i];
    }
    int x;
    cin>>x;
     for (int i=0; i<n; i++){
        if(a[i]<=x && b[i]>=x){
            m++;
        }
     }
     cout <<m;}