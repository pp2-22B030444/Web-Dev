#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0,b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    while (a[i]>0){
       sum= a[i]%2+b;
      b=a[i]/2;
    }
    cout << sum << endl;
}}