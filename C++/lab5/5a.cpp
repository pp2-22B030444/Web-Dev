#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    int u=0,l=0;
    for (int i=0; i<s.size(); i++){
        if (s[i]>='a' && s[i]<='z'){
            l++;
        }
         if (s[i]>='A' && s[i]<='Z'){
            u++;
        }
    }
    cout << l << " "<<u;}