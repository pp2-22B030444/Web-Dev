#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n, int m){
   if (a[n-1]-a[n-2]>m){
    return check(a,n-1,m);
   }
   if(n==1){
    return 1;
   }
   else {
    return 0;
   }
}  
int main (){
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];}
    sort(a,a+n);
    if (check(a,n,m)){
        cout<<"no";
    }
    else cout <<"cheater";
    }
