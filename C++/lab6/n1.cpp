#include<bits/stdc++.h>
using namespace std;
int k(int a, int b){
    int arr[a][b];
 for (int i=0; i<a; i++){
        for (int j=0; j<b;j++){
            cin >> arr[i][j];
        }
    }
    for (int j=0; j<b; j++){
        for (int i=0; i<a;i++){
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
}}
int main(){
    int n,m;
    cin >> n>>m;
    k(n,m);
}