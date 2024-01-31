#include <bits/stdc++.h>
using namespace std;
int main (){
    map <string ,string> mp;
    int n;
    bool zhas=false;
    cin>> n;
    string s,t;
    for(int i=0; i<n; i++){
        cin>> s>>t;
    for (auto i:mp){
        if (i.second==s){ 
            zhas=true;
            mp[i.first]=t; 
            }}
if (zhas==false)
     mp[s]=t;
}cout << mp.size()<<endl;
for(auto i:mp){
cout << i.first << " " << i.second<<endl;
}
}


