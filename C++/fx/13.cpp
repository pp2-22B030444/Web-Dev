#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <int> v;
    while(cin>>n){
        v.push_back(n);
        if (n==0) 
        break;
    }
    if ((v.size()-1)%2==0){
    for (int i=0;i<((v.size()-1)/2); i++){
        cout << v[i]+v[v.size()-2-i]<<" ";}}
    else{
        for (int i=0;i<((v.size())/2); i++){
        cout << v[i]+v[v.size()-1-i]<<" ";}
        cout << v[v.size()/2];}



}
