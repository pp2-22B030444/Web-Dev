#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size();i++){
        sum+=s[i];
        if(sum/s[s.size()-1]){
            cout<<"Yes";
            return 0;
        }
        else {
            cout<<"no";
            return 0;
        }
    }
}