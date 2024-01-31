#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string,string> m;
    map <string,bool> mp;
    for (int  i = 0; i < n; i++){
    string s,t;
    cin>>s;
    getline(cin,t);
      for (int  i = 0; i < t.size(); i++){
    if(t.size()!=' '){
     m[t]=s;
     mp[t]=true;}}
    int r;
    cin>>r;
    for(int i=0; i<r;r++){
        string g;
        cin>>g;
        if(mp[g]){
            cout<<m[g]<<endl;
        }
    }}}


    