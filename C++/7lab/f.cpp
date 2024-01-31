#include<bits/stdc++.h>
using namespace std;
int even(string);
int main(){
    string n;
    cin>>n;
    cout << even(n);}
int even(string n){
    int a=0;
    for (int i=0; i<n.size();i++){
    if(n[i]%2==0){
    a++;
}}
return a;}