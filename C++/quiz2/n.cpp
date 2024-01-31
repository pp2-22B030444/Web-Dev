#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
int main(){
    bool check=false;
    int n;
    cin>> n;
    long long a[n];
    int m=0 ;
for (int i=0; i<n; i++){
    cin>>a[i];}
for (int i=0; i<n; i++){
    if (abs(a[i]-a[n-1-i]) % 9 == 0)
        check=true;
    else{
        check=false;
        break;
    }        
}
    if (check==true)
        cout <<"YES";
    else
        cout << "NO";
 return 0;}