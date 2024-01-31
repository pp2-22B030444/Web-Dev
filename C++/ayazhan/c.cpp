#include <iostream> 
using namespace std; 
 
int a[101]; 
 
int gcdmax(int a, int b){ 
  
 while(a * b != 0){ 
  if(a > b) a %= b; 
  else b %= a; 
 } 
  
 return a + b; 
} 
 
int main(){ 
  
 int n, gcd = 1; 
 cin >> n; 
  
 for(int i = 0; i < n; i++){ 
  cin >> a[i]; 
 } 
  
 for(int i = 0; i < n; i++) 
  for(int j = i + 1; j < n; j++){ 
   gcd = max(gcd, gcdmax(a[i], a[j])); 
  } 
  
 cout << gcd; 
 return 0; 
}
