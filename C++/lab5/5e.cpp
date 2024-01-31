#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    int t=0,j=0;
    for (int i=0; i<s.size(); i++){
        if(i%2==0){
            j++;
        }
        else {
            t++;
        }}
        if (j==t){
            cout << "YES";
        }
        else
        cout <<"NO";}