#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    string d;
    for (int i=0; i<s.size();i++){
        if (s[i]>='a' && s[i]<='z'){
         d+=s[i];}}
       cout <<d;
}