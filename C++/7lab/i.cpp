#include<bits/stdc++.h>
using namespace std;
int sum();
int main(){
    cout << sum();
    return 0;}
int sum(){
    int n;
    cin>>n;
    if (n==0){
     return 0;}
     return n+sum();
     }