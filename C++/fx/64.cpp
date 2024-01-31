#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    set <char> st;
    for(int i=0; i<s.size();i++){
    for(int j=0; j<t.size();j++){
     if(s[i]==t[j]){
        st.insert(s[i]);
     }}}
      if(st.empty()){
        cout<<"no";
      }
      else
    for(auto i:st){
        cout<<i;
    }
}