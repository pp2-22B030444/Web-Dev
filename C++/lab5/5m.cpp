#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char a;
    int x,n=0;
    cin >> s >> a >> x;
    for (int i=0; i<s.size(); i++){
        if (s[i]==a){
            n++;
        }
    }
    if (x==n){
        cout << "YES";}
    else {
        cout << "NO";
    }
}