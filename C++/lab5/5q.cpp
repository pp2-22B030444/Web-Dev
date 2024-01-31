#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >>t;
    string ans;
   for ( int j=0; j< t.size()/s.size();j++){
   ans+=s;
}
int (t==ans)?cout << "YES":cout << "NO";
}