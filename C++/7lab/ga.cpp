#include<bits/stdc++.h>
using namespace std;
string s="";
string output(int n, int m){
    if(n==0){
    return s;
}
if (n%m<10){
    s=char(n%m + 48 ) + s;
    return output(n/m,m);
}
else {
    s=char(n%m+55)+s;
    return output(n/m,m);
}

}
int main (){
    int n,m;
    cin>>n>>m;
    cout << output(n,m);
    return 0;
    }

