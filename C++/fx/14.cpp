#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
     string n; cin>>n;
    multiset <char> v;
    multiset <char> :: iterator it;
    map<char,int> m;
    for (int i=0;i<n.size(); i++){  
         v.insert(n[i]);
    }
   for (it=v.begin(); it!=v.end(); ++it){
        m[*it]++;}
   for (auto i:m){
    if (i.second==1){
        cout << i.first ;
    }
}}