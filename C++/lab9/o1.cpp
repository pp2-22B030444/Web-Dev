#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string,string> t;
    for (int i = 0; i < n; i++)
    {
        string l,p;
        cin>> l>> p;
        t[l]=p;
    }
    int m;
    cin>> m;
    for (int i = 0; i <m; i++){
        string a,b;
        cin >>a>> b;
        if((t[a].empty())){
            cout <<"login error"<< endl;
        }
        else if( t[a]!=b ){
            cout << "password error"<< endl;
        }
        else{
            cout << "correct password"<< endl;
        }
    }
}