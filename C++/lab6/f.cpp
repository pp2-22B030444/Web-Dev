#include<bits/stdc++.h>
using namespace std;
bool stroka(string str, int c){
    for (int i=0; i< str.length(); i++){
        if ('0'<=str[i] && str[i]<='9'){
            c--;
            cout <<" "<< c;
    if (c==0){
       return true;
    }}}
    return false;
   }
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << (stroka(s,n) ? "YES" : "NO");
}                            