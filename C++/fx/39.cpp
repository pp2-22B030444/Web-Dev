#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int a[n];
    double oddsum = 0, oddcnt = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(i%2!=0 && a[i]%2==0){
            oddsum += a[i];
            oddcnt++;
        }
    }
   if(oddsum == 0){
     cout << 0;
    }
    cout << fixed << setprecision(6) <<  oddsum/oddcnt;
}