#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t,r;
    for (int i=0; i<s.size()/2; i++){
       t+=s[i];
    }
    for (int i=s.size()/2; i<s.size(); i++){
        r+=s[i];
    }
    if (r==t){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}