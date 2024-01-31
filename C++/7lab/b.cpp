#include<bits/stdc++.h>
using namespace std;
int tobinary(int n);
int main (){
    int n;
    cin>>n;
    tobinary(n);
}
int tobinary(int n){ 
   if (n==0){
    return;
   }
   tobinary(n/2);
   int a=n%2;
   cout <<a;
}






