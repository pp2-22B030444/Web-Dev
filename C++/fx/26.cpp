#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> v;
    vector <string> r;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
    v.push_back(s);
    sort(s.begin(),s.end());
    r.push_back(s);
    }   
    int x;
    for(int i=0; i<n; i++){
        if (r[i]==v[i]){
            x=i; 
            cout << x+1<<endl;
        }
        else {
            cout << 0<<endl;
        }}}

    