#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    set <char> s;
    map<char,int> m;
    set <char> :: iterator it;
    for (int i=0; i<n; i++){
        string t;
        cin>> t;
     for (int i=0; i<t.size(); i++){
        s.insert(t[i]);
}
     for (it=s.begin(); it!=s.end(); ++it){
        m[*it]++;}
        s.clear();
     
    }
for (auto i:m){
    if (i.second==n){
        cout << i.first << " ";
    }
}}