#include <bits/stdc++.h>
#include <string>
using namespace std;
int main (){
    string s;
    cin>>s;  int l=0,u=0;
    int a;
    sort (s.begin(),s.end());
    for (int i=0; i<s.size(); i++){
    if (s.size()%2!=0){
        cout << -1;
        return 0;
    }
    else{
        if(s[i]>='A' && s[i]<='Z') {
            u++;
        }
        else {
            l++;
        }}}
    if (u==l){
        cout <<0;
        return 0;
    }
     else if (u<l) {
        a=abs(l-u)/2;
        cout <<a;
        return 0;
     }
     else if (u>l) {
        a=abs(l-u);
        cout <<a;
        return 0;
     }
     else if (u=0 ){
        a=s.size();
        cout << a;
        return 0;
     }
     else{
        a=s.size()/2;
        cout << a;
        return 0;
     }
    
}