#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int>b){
    if(a.first==b.first){
        return a.second<b.second;
        return a.first<b.first;
    }
}
int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> m;
    for(int i=0; i<n;i++){
        int a,b;
        cin>>a>>b;
        m.push_back(make_pair(a,b));
    }
    sort(m.begin(),m.end());
     for(int i=0; i<m.size();i++){
        cout<<m[i].first<<" "<<m[i].second<<endl;
    }
}