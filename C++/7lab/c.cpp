#include<bits/stdc++.h>
using namespace std;
bool find(int n,int x);
int main(){
   int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(a[i]==x){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
bool  find(int n, int x){
  if (n==x){
    return true;
  }
  else 
  return false;
}