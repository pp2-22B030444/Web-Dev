#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>> s;
    cin>>n;
    
       for (int j=0; j<s.size()-n; j++){
        s[j]=s[j]+n;
       }
       for (int l=s.size()-n; l<s.size(); l++){
        s[l]=s[l]-(26-n);
       }
    
     for (int i=0; i<s.size(); i++){
        cout << s[i];}}