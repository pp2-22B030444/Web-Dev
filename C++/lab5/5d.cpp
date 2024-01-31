#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    string q;
    for(int i=s.length()-1; i>0; i--){
        q=q+s[i];}
    if (s.find(q)!=-1){
        cout <<"YES";
    } 
    else {
        cout << "NO";
    }}