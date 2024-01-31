#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin >> n;
    int a[n],b[n];
    for (int i=0;i<n;i++){
            cin >> b[i];}
    for (int j=0;j<n;j++){        
            cin >> a[j];}
    //sort(b,b+n);
    //sort(a,a+n);
    for (int i=0;i<n;i++){ 
         for (int j=0;j<n;j++){
      if(b[i]==a[j]){
            c++;}}}
    
    if(c%2!=0){
        c=(c+1)/2;
        cout << c;}
         else if (c%2==0){
        c=c/2;
    cout << c;}
    else {
        cout << "0";}
    
     return 0;
}    