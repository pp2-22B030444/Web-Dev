#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    vector <int> v;
    for (int i=0;i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);}
    sort(v.begin(),v.end());
    if(y>x){
    for (int i=0; i<=x; i++){
        cout << v[i]<<" ";
    }
   for (int i=v.size()-1; i>=y-1; i--){
       cout<<v[i] << " ";}}
    else if (x>y){
     for (int i=0; i<abs(y-x); i++){
        cout << v[i]<<" ";
    }
   for (int i=v.size()-1; i>=y-1; i--){
       cout<<v[i] << " ";}}   
    }
    