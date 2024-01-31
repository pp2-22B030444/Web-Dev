#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    string s;
    getline(cin,s);
    int n=0,x;
    string t=s;
    for (int i=0;i<s.size(); i++){
        if (s[i]>='0' && s[i]<='9' ){
        s[i]=0;
        }
        else {
            s[i]=t[i];
        }
    if(n==0){
        t=+s[i];
    }}
    cout<<t;

    return 0;
}
