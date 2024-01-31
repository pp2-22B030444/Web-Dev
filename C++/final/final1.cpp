#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    map <int, int> m;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        m[x]++;}
    int sum=0;
    for (auto i:m){
        if(i.second==1){
            sum+=i.first;}}
            cout << sum;}