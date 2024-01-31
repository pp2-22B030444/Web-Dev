#include <bits/stdc++.h>
using namespace std;

bool pr(int b){
    for (int i = 2; i < b; i++)
    {
        if(b%i==0){
            return false; break;
        }
    }
    return true;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        k=abs(k);
        if(pr(k) && k!=0 && k!=1){
        v.push_back(1);
        }
        else v.push_back(0);

    }
    
    cout << count(v.begin(), v.end(), 1);

}