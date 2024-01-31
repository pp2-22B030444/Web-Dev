#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    string q=s;
    sort (s.begin(),s.end());
            if (s==q){
                cout << "YES";
                return 0;
            }
            else {
                cout << "NO";
            }
        }