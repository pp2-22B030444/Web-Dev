#include<bits/stdc++.h>
using namespace std;
int max(string n);
int main (){
    string n;
    cin>>n;
    max(n);
}
int max(string n){
    sort (n.begin(),n.end());
    reverse (n.begin(),n.end());
    cout << n[0];

}









