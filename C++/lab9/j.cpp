#include <bits/stdc++.h>
using namespace std;
int main(){
map <string,int> m;
map <string,int> :: iterator it;
int n;
cin>>n;
string x;
int s;
for (int i=0; i<n;i++){
    cin>> x>>s;

    if((!m[x])){
        m[x]=s;
    }
    else{
        m[x]+=s;
    }

}

for ( it=m.begin(); it!=m.end(); ++it){
   
     cout << it-> first <<" "<< it->second<< endl;
    }




}