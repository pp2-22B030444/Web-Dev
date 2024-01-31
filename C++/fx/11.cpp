#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    map<string,int> m;
     map<int ,string> mp;
    map <int,string> :: reverse_iterator it;
    for (int i=0;i<n;i++){
         string x;
         int y;
        cin>>x>>y;
        m[x]+=y;
        sum+=y;
        }
    for (auto i:m){
    mp[i.second]=i.first; }
    for(it=mp.rbegin(); it!=mp.rend(); it++ ){
        
        cout << it->second <<" " << it->first*100/sum<<"%"<<endl;
    }}
  