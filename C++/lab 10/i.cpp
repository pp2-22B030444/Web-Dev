#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
        b.push_back(k);
    }
    reverse(b.begin(),b.end());
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=b[i]){
            cout<<"Instead of "<<v[i]<<" here was "<<b[i]<<endl;
        }
        else cout<<"OK"<<endl;
    }
    


}