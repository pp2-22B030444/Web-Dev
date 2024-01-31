#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,double> mp;
    int n;
    int sum=0;
    cin>>n; //SIU
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        for (int j = 0; j < m; j++)
        {
            string s; int d;
            cin>>s>>d;
            sum+=d;
            if(!mp[s]){
                mp[s]=d;
            }
            else mp[s]+=d;
        }
    }
    for (auto i : mp)
    {
        cout<<i.first<<" "<<i.second / sum * 100<<endl;
    }
    
    


}