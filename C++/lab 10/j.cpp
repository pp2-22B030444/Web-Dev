#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    rotate(v.begin(), v.begin()+m, v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    



}