
#include<bits/stdc++.h>
using namespace std;
void tobinary(int n);
int main (){
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    for_each(a.begin(),a.end(),tobinary);
}
void tobinary(int n){ 
   string s="";
    while(n!=0){
        int k=n%2;
        n/=2;
        s+=(k+48);
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}