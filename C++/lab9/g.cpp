#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string,int> m;
    string n;
    cin>>n;
    for (int i=0; i<n.size(); i++){
       if(m[n]==0){
        cout<<n[i]<< endl;
        m[n]++;
       }
      else
        cout<<" "<<endl;
    }}