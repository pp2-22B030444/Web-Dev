#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> a(n);
vector <int> t;
vector <int> zh;
for (int i=0; i<n; i++){
    cin>>a[i];
if (a[i]%2==0){
    zh.push_back(a[i]);

}
else{
    t.push_back(a[i]);
}}
sort (zh.begin(), zh.end());
sort (t.begin(), t.end());
for (int i=zh.size()-1;i>=0;i--){
cout << zh[i]<< " ";
}
for (int i=0; i<t.size();i++){
cout << t[i]<<" ";
}

}