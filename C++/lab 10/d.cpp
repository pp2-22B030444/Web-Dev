#include<bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define pf push_front
#define mp make_pair
#define y1 yyyyy
#define y0 yyyyyy
#define time time123


using namespace std;

long long int sum(vector<int> v){
    long long int res = 0;
    for(auto i : v)
        res += i;
    return res;
}

bool cmp(vector<int> a, vector<int> b){
    if(sum(a) == sum(b)){
        int n = a.size(), m = b.size();
        if(n == m){
            for(int i = 0;i < min(n, m);i++){
                if(a[i] != b[i])
                    return a[i] < b[i];
            }
            return n > m;
        }
        return n < m;
    }
    return sum(a) < sum(b);
}

int main(){
    int n;
    cin>>n;
    vector< vector<int> > v(n);
    for(int i = 1;i <= n;i++){
        int m;
        cin>>m;
        for(int j = 1;j <= m;j++){
            int x;
            cin>>x;
            v[i - 1].pb(x);
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 1;i <= n;i++){
        int m = v[i - 1].size();
        for(int j = 1;j <= m;j++){
            cout<<v[i - 1][j - 1]<<" ";
        }
        cout<<endl;
    }
    
}
    