#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin >>n;
    while (n--){
    for (int i=0; i<s.size();i++){
        if (s[i]>='a' && s[i]<'z'){
        s[i]+=1;}
    else if (s[i]=='z'){
        s[i]='a';
    }}}
    cout << s;}