#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    for (int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        m[x]++;}
    int c=0;
    for (auto i:m){
        if (i.second){
            c++;
        }
    }
    cout <<c;}
  