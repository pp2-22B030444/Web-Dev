#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map <string,int> m;
    while(cin>>s){
        m[s]++;
    }
for(auto i:m){
    if(i.second%2==0){
        cout<<i.first<<endl;
    }
}}