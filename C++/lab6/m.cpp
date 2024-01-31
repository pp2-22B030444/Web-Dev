#include<bits/stdc++.h>
using namespace std;
int inverse(int a){
    int arr[a];
    for (int i=0; i<a; i++){
        cin >>arr[i];
    }
    for (int i=a-1; i>=0; i--){
        cout << arr[i]<< " ";
    }
    
}
int main(){
    int n;
    cin>>n;
    inverse(n);
}