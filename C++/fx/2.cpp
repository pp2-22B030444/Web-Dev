#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> m;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
     for (int j=0;j<x;j++){
        string s;
        cin>>s;
        m[s]++;
    }}
    for (auto i:m){
        if (i.second==n){
            cout << i.first;
        }
    }
}