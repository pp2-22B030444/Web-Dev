#include <bits/stdc++.h>
#include <string>
using namespace std;
int main (){
    string s;
    set <string> a;
    set <string> :: iterator it;
    while(cin>>s){
        string ss=s;
        reverse(ss.begin(),ss.end());
        if(ss==s){
            a.insert(s);
        }
        }
    for (it=a.begin(); it!=a.end(); it++){
        cout <<*it<<endl;
    }
}
    
