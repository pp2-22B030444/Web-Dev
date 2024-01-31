#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a,b;
    cin>>a>>b;
    for(int i=a-1;i<b; i++){
        s[i]+=32;}
    cout<< s;
    }