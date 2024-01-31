#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,x1,y1,a,b;
    int r,t;
    cin>>x>>y>>x1>>y1>>a>>b;
    if(x>x1){
        r=x;
    }
    else{
        r=x1;
    }
    if(y>y1){
        t=y;
    }
    else{
        t=y1;
    }
    if(r>=a && t>=b){
    cout<<"yes";
    }
    else {
        cout<<"no";
    }}