#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int c=0;
    if (n%2==0){
        c+=1;
    }
    if (n%5==0){
        c+=1;
    }
    if(n%17==0){
        c+=1;
    }
    if (n%19==0){
        c+=1;
    }
    if (c>=2){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }}