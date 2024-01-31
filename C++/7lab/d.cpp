#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int sum(string s){
    int plus = 0;
    for(int i = 0; i < s.size(); i++){
        plus+=s[i]-'0';
    }
    return(plus);
}
int main() {
    string n;
    cin >> n;
    cout <<sum(n);
    }
