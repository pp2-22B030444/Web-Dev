#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int x=0,y=0;
   for (int i=0; i<4;i++){
        if (a[i]==b[i]){
           x++;}}
    for (int i=0; i<4;i++){
    for (int j=0; j<4;j++){  
        if (a[i]==b[j]){
            y++;}}}
            y=y-x;           
    cout << x <<" "<<y;
}