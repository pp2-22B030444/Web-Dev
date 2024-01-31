#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    cin >> s >> c;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==c){
        cnt++;}}
        
    if (cnt<=1){
    for(int i=0; i<s.size(); i++){
        cout << i+1;
       break;}}
else if (cnt>=2){
for(int i=0; i<s.size(); i++){ 
     if(s[i]==c){  
    cout<< i<< " ";
    break;}}
for(int i=s.size(); i>0; i--){
    if (s[i]==c){
    cout<< i<<" ";
    break;    
    }}}
    
    }