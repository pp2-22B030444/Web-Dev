#include <bits/stdc++.h>
using namespace std;
string change(string s){
    string a ="";
    for (int i=0; i<s.size();i++){
      int cnt =0;
         for(int j = 0; j < 10; j++){
     if (s[i]=="aeuioAEUIO"[j])
      cnt++;}
      //cout <<cnt; 
      if (cnt==0)
         a+=s[i]; } 
           
    
      return (a);
   }
int main(){
   string t;
   getline (cin,t);
    cout << change(t);

   return 0; 
}
