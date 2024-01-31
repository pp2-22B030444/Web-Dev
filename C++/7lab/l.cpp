#include<bits/stdc++.h>
using namespace std;
int palindrome(string);
int main(){
    string n;
    cin>>n;
  palindrome(n);
}
int palindrome(string n){
    string s=n;
    reverse (n.begin(),n.end());
    if (s==n){
     cout <<"Yes";
    }
    else{
     cout<<"No";
    }
  
}