#include<bits/stdc++.h>
using namespace std;
int pow(int);
int main(){
    int n;
    cin>>n;
    if (pow(n)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;}
int pow(int n){
    if (n==1){
        return 1;
    }
    if (n%2==0){
        return pow(n/2);
    }
    else {
    return 0;}}