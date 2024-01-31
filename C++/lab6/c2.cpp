#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    int c=0,d=n;
    for (int i=0;i<n;i++){
            cin >> b[i];}
    for (int j=0;j<n;j++){        
            cin >> a[j];}
    for (int i=0;i<n;i++){ 
         for (int j=0;j<d;j++){
        if(b[i]==a[j]){
            a[j]=a[d-1];
            d--;
            c++;
            break;}
        }}
       cout <<c;

return 0;
}