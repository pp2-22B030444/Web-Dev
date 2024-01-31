#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,set<int>> m;
    for (int i=0;i<n;i++){
         string x;
         int y;
        cin>>x>>y;
        m[x].insert(y);}
    for (auto i:m){
        if (i.second.size()>=3){
    cout<< i.first<<" "<<"+1"<<endl;
    }
    else{
      cout<< i.first<<" "<<"NO BONUS"<<endl;   
    }}}