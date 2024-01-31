#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin >> str;
int n;
cin >>n;
int c=0,k=0;
for (int i=0; i< str.length(); i++){
       for (c=0;str[i]>='0' && str[i]<='9';i++){
        c++;
       if(k>c){
       k=k;
       }
       else {
              k=c;
       }
         // k=(k>c)?k:c;
            
}}
       if (n<=k) {
        cout << "Valid";
        return 0;
       }
        cout << "Not valid";
       
}