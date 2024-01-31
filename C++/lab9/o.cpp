#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
    cin >> n;
    map <string,string> t;
    map <string,string> ::iterator it;
   
    for (int i=1;i<=n;i++){ 
        string a,b;
        cin>> a>>b;
        t[a]=b;
    }
    int m;
    cin >> m;
    for (int j=1;j<=m;j++){ 
        string c,d;
        cin>> c>>d;
     if(t.find(c)!=t.end()){ 
        if(t[c]==d){
            cout<<"correct password"<<endl;
        }
        else cout<<"password error"<<endl;
         }   
     else{
        cout<<"login error"<<endl;
       }   
    }
}