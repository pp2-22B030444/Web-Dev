#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int x;
    for(int i=0;i<a;i++){
        if(arr[i]>=b && arr[i]<=c ){
            x=i;
            cout << x+1<<" ";}}
        }