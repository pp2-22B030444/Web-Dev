#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,m,i,j;
    cin>>n>>m;
    int arr[n][m];
    int brr[n];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int sum;
    for (int i = 0; i < n; i++){
        sum = 0;
        for (int j = 0; j < m; j++){
            if(arr[i][j]>0){
                sum++;
            }
        }
        brr[i]=sum;
    }
    int max = 0;
    int id;
    for (int i = 0; i < n; i++){
        if(max<brr[i]){
            max = brr[i];
            id = i;
        }

    }
    sort(brr, brr +n);
    for (int i = 0; i < n; i++){
        if(brr[i]==brr[n-1]){
            cout<<"Numbers are equal";
            break;
        }
        else{
            cout<<id + 1;
            break;
        }
    }
}
