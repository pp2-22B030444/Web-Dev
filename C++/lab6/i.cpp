#include<bits/stdc++.h>
using namespace std;
int j(string s){
    for(int i =0; i< s.size(); i++){
        if('a'<=s[i] && s[i]<='z'){
        if(i%2==0){
            s[i]=s[i]-32;
            cout << s[i];
        }
        else {
           cout << s[i];
        }}
         else {
            cout << s[i];
        } }}

int main(){
    string t;
    cin >> t;
    j(t);
        return 0;}
