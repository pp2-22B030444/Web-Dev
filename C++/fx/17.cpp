#include <bits/stdc++.h>
#include <string>
using namespace std;
int main (){
    int s;
    cin>>s;
    vector <int> v;
    vector <int> :: iterator it;
    for (int i = 2; i <= 100; i++){
    int zhas=0;
       for (int j = 2; j < i; j++){  
        if(i%j==0){
            zhas=1;
            break;}} 
    if (zhas==0)
    v.push_back(i);
    }
    for (it=v.begin(); it!=v.end(); it++){

            cout <<v[v[s-1]-1];
            return 0;
        }
    }