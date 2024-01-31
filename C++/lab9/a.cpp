#include <bits/stdc++.h>
using namespace std;
int main(){

    multiset<pair<int,int>> a;
    multiset<pair<int,int>>::iterator it;
    int n;
    cin >> n;  
    for (int i=0;i<n;i++){ 
        int c,b;
        cin>> c>>b;
        a.insert(make_pair(c,b));}
    
     for (it=a.begin(); it!=a.end(); it++){
    cout <<it-> first<<' '<< it->second<<endl;
}}