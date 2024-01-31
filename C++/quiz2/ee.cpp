#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string n;
    cin>> n;
    long long  sum=0;
     for(int i = 1; i < n.size(); i++){
        sum+=(n[i]-'0');
    }
    if ((sum%10)==int(n[0])-'0'){
        cout << "YES";
    }
    else{
   cout << "NO";}}