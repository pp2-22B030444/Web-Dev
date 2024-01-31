#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string,double> m;
    for (int i=0;i<n; i++){
        string s;
        int t;
        cin>>s>>t;
        m[s]+=t;}
     for(auto i:m){
        if(i.first[0]%2==0){
            cout<<i.first<<" "<<(i.second-i.second/2)<<endl;
        }
        else{
            cout<<i.first<<" "<<(i.second+i.second/2)<<endl;
        }
     }}