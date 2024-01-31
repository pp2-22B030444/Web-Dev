#include <bits/stdc++.h>
using namespace std;
int sum(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum+=s[i]-'0';
    }
    return(sum);
}
int main() {
    int n;
    cin >> n;
    cout <<sum(n);
    }
