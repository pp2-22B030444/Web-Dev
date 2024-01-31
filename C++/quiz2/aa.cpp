#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    int sum=0, sum1=0,x=0,y=0;
    if (n==0){
        cout<<"Left hand magic power: 0"<<endl;
        cout<<"Right hand magic power: 0";
    }
    else{
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        if (a[i]%2==0){
            sum+=a[i];
            x++;}
        else {
            sum1+=a[i];
            y++;
        }
    }
            cout <<"Left hand magic power:"<<" "<< sum*x<<endl;
            cout<<"Right hand magic power:"<<" "<<sum1*y;}
}