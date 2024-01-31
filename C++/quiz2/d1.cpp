#include <bits/stdc++.h>
using namespace std;
void solve(string t)
{
    long long n = stoi(t);
    vector<int> a;
    while(n > 1){
        a.push_back(n % 2);
        n /= 2;
    }
    if(n)
        a.push_back(n);
    for(int i = a.size() - 1; i >= 0; --i)
        cout << a[i];
}
int main()
{
    string s, t;
    getline(cin, s);
    s += ".";
    for(int i = 0; i < s.size(); ++i){
        if(s[i] >= '0' && s[i] <= '9')
            t += s[i];
        else{
            if(t.size()){
                solve(t);
                t = "";
            }
            if(i != s.size() - 1)
                cout << s[i];
        }
    }
    return 0;
}
