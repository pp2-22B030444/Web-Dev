#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    int n,m;
    cin >>n>>m;
    for (int i=0; i<n-1;i++){
        t+=s[i];
        }
    for (int i=m-1; i>=n-1;i--){
        t+=s[i];
        }
    for (int i=m; i<s.size(); i++){
        t+=s[i];
    }
    cout <<t;}
