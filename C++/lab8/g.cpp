#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int b,c=0,d=0;
    cin >>b;
    for (int i=0; i<a.size(); i++){
    if (a[i]>b){
    for (int j=2; i<sqrt(a[i]); i++){
        if (a[i]%j==0)
            c++;}}}
     cout <<c;
}