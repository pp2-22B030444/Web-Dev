#include <bits/stdc++.h>
using namespace std;
int main(){

    multimap <int,int> m;
    multimap <int,int> ::iterator it;
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){ 
        int a,b;
        cin>> a>>b;

        m.insert(make_pair(a+b,i));
        }
     for (it=m.begin(); it!=m.end(); it++){
    cout <<it->second<<" ";
}}