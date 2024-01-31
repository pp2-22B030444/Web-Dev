#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char a;
    cin>>a;
    string s;
    cin >>s;
    string c;
    for (int i=0; i<s.size();i++){
        if (s[i]==a)
            s[i]=0;
    if (s[i]!=0)
    c+=s[i];}
    cout<< c;
    

}