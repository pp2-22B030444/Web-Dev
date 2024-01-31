#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++){
     if (s[i]=='1' && s.size()==1){
        cout << "true";
        return 0;
     }
     else if (s[i]=='0' && s.size()==1){
        cout<<"false";
        return 0;
     }
     else 
     cout << s[i];
    }
}