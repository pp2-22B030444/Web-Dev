#include <bits/stdc++.h>
#include <string>
using namespace std;
int main (){
    string s;
    vector<string> v;
    while(1){
        cin>>s;
        if(s[s.size()-1]=='0'){
        v.push_back(s);
        break;
        }
     v.push_back(s);}
    vector <int> c;
    for (int i=0;i<v.size();i++ ){
        int count=0;
        char ch;
        cin>>ch;
        for (int j=0;j<v[i].size();j++){
            if(ch==v[i][j]){
                count++;
            }
        }
        c.push_back(count);
    }
    for (int i=0;i<c.size(); i++){
        cout<<c[i]<<endl;
    }
 }