#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    int n;
    cin >> n;
    vector <char> l;
    for(int i=0;i<n;i++){
        char x;
        cin >> x;
        l.push_back(x);
    }
    sort(l.begin() , l.end());
    for(int i=0;i<n;i++){
        int cnt  = 0;
        for(int j=0;j<s.length();j++){
            if(l[i] == s[j]){
                cnt++;
            }
        }
        cout << l[i] << " - " << cnt << endl;
    }
}