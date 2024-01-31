#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    double a,b,c;
    cin >> a>>b>>c;
    if (c==-1){
    for (int i=floor(sqrt(b));i>=ceil(sqrt(a));i--){
        cout << pow(i,2)<<" ";
    }}
    if (c==1) {
    for (int i=ceil(sqrt(a)); i<=(sqrt(b)); i++){
        cout << pow(i,2) <<" ";
    }  
}
    return 0;
}