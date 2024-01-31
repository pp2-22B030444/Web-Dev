#include<bits/stdc++.h>
using namespace std;
int to(int n);
int main (){
    int n;
    cin>>n;
    cout <<to(n);
}
int to(int n){ 
    int sum=0;
  while(n){
  sum+=(n%10)/2;
  n/=10;}
  return sum;}