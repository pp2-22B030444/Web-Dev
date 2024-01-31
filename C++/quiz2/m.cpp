#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    long long int a,b, cnt=-60;
    cin>>a>>b;
    if(b%2==0 || 2%b==0){
    while(a*pow(2,cnt)!=b){
    cnt++;
    }
    cout<<"YES"<<" "<<cnt;
    return 0;}
    cout <<"NO";
    return 0;}