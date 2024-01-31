#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    vector<int> c;
    vector<int> d;
    int number;
    for(int i= 0; i < a; i++){
        cin >> number;
        c.push_back(number);
    }
    for(int i= 0; i < b; i++){
        cin >> number;
        d.push_back(number);
    }

    vector<int>:: iterator it;
    it = unique(c.begin(), c.begin()+a);
    c.resize(distance(c.begin(), it));

    vector<int>:: iterator it2;
    it2 = unique(d.begin(), d.begin()+b);
    d.resize(distance(d.begin(), it2));

    vector<int> e;

    

    for(int i =0; i < a+b; i++){
        if(i%2==0){
            e.push_back(c[i/2]);
        }

        else{
            e.push_back(d[(i-1)/2]);
        }
    }

    vector<int>:: iterator it3;
    it3 = unique(e.begin(), e.begin()+c.size()+d.size());
    e.resize(distance(e.begin(), it3));

    for(int i = 0; i < e.size(); i++){
        cout << e[i] << " ";
    }
}