#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int x, n;
    cin >> n;
    x=n;
    long long int sum = 0;
    while (x>0) {
        sum += x % 10;
        x /= 10;}  
        int c=n%10;
   if (sum%c==0){
        cout << "YES";
        return 0;}

       cout <<"NO";
       
    
    return 0;}