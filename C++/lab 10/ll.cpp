#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> v((n+1)*n/2);
    for (int i = 1; i <= n; i++)
    {
        fill(v.begin()+sum, v.begin()+sum+i,i );
        sum+=i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
}