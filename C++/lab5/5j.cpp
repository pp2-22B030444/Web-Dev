#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    string q,t;
    for(int i=s.length()-1; i>0; i--){
        q+=s[i];}
        cout << q <<" ";
    for (int i=1; i<s.length();i++){
       t+=s[i];}
       cout << t;
    if (q==t){
        cout << "YES";
    }
    else {
    cout <<"NO";}
}