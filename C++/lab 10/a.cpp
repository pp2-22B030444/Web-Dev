#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    vector<string> mp;
    vector<int> mt;
    string s;
    int t;
    for(int i=0; i<n; i++ ){
        cin>>s>>t;
        mp.push_back(s);
        mt.push_back(t);
    }
    sort (mp.begin(), mp.end());
    sort(mt.begin(), mt.end());
    for(int i=0; i<n; i++ ){
        cout<<mp[i]<<" "<<mt[i]<<endl;
        
    }
}