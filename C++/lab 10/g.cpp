#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;

    map<pair<pair<string,int>, pair<string, int> >, int> m;

    string n1, n2;
    int s1, s2;

    for(int i = 0 ; i < a; i++){
        cin >> n1 >> s1 >> n2 >> s2;
        m[make_pair(make_pair(n1, s1), make_pair(n2, s2))] = s1 + s2;
    }





    map<pair<pair<string,int>, pair<string, int> >, int>:: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first.first.first << " and " << (*it).first.second.first << " " << (*it).second << endl;
    }

}