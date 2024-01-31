#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    for (int i=0; i<s.size();i++){
        if ('a'<=s[i] && s[i]<'z'){
            s[i]= s[i]+1;
            cout << s[i];
        }
        else  {
            s[i]=s[i]-25;
            cout << s[i];
        }
    }
}