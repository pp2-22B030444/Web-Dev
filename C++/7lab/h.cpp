#include<bits/stdc++.h>
using namespace std;
int fibonacci(int);
int main(){
    int n;
    cin>>n;
    cout << fibonacci(n);
    return 0;}
int fibonacci(int n){
    int i=0;
    if (n==1){
        return 0;
    }
    if (n>3){
        i++;
        return n-(i+1);
         i++;
    }
    else
    i=1;
    return n-(n-i);
}