#include <bits/stdc++.h>
using namespace std;
int d(int a, int b){
     return(abs(a-b));
}
int main(){
    int n;
    
    cin >> n;
    int c[n],f[n];
    for (int i=1; i<=n;i++){
            cin >> c[i];}
     for (int i=1; i<=n;i++){        
            cin >> f[i];}
    for(int i=1; i<=n; i++){

    cout << d(c[i],f[i]) << " ";}

   return 0;
    
}
