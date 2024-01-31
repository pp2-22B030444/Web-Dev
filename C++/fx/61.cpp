#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,r;
    cin>>s;
   for(int i=0;i<s.size()/2; i++){
   t+=s[i];
   }
   for(int i=s.size()/2;i<s.size(); i++){
   r+=s[i];
   }
   for(int i=0;i<s.size()/2; i++){
    if(t[t.size()-1]==r[0]){
        cout<<"yes";
        return 0;
    }
    else 
    cout<<"no";
    return 0;
  }}