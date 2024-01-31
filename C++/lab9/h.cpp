#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string,int> m;
    map <string,int> :: iterator it;
    int n;
    cin>>n;
    string x;
    for (int i=1; i<=n; i++){
        cin>>x;
       m.insert(make_pair(x, i )); 
    }
    for (it=m.begin();it!=m.end();++it){
        cout << it-> first <<" "<< it->second<< endl;
    }
}
