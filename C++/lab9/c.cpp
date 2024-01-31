#include <bits/stdc++.h>
using namespace std;
int main(){
map <int,int> m;
map <int,int> :: iterator it;
int n;
cin>>n;
int x;
for (int i=0; i<n;i++){
    cin>> x;
    m[x]++;
}
int cnt=0;
for ( it=m.begin(); it!=m.end(); ++it){
    if (it->second>=2){
        cnt++;
    }
}
cout << cnt;}

