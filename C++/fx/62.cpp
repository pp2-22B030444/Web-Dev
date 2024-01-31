#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    map <char,int> m;
    for (int i=0;i<n.size(); i++){
        m[n[i]]++;}
        int c=0;
    for(auto i:m){
        if(i.second%2==1){
          c++;  
    }}
        if(c==1 || c==0){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }