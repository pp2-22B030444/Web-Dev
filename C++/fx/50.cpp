#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b>>c;
    for(int i=0;i<a;i++){
        if(arr[i]>=b && arr[i]<=c ){
    
            cout << arr[i]<<" ";}}
        }
