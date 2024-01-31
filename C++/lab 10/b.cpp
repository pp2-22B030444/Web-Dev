#include<bits/stdc++.h>
using namespace std;
long long int pw(){
    static int i=-1;
    i++;
    return powl(i,i);
}
int main(){
    int n; cin>>n;
    vector<long long> v(n+1);
    generate(v.begin(), v.end(), pw);
    for(auto it:v){
        cout<<it<<" ";
    }
    
    
}