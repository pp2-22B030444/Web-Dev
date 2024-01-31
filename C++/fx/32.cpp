#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int res=1;
    set <int> a;
    set <int> :: iterator it;
    for (int i=0; i<n.size(); i++){
        a.insert(n[i]);}
    for ( it=a.begin(); it!=a.end(); ++it){
        cout << char(*it);
    }  
    cout<<endl;
    int b=a.size(); 
    for (int i=1; i<=b; i++){
    res=res*i;    
        }
        cout <<res;}