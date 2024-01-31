#include <bits/stdc++.h>
using namespace std;
string div2(string a, int b = 2){
 int carry = 0;
 for (int i=0; i < a.size(); i++) {
  long long cur = (a[i]-'0') + carry * 1ll * 10;
  a[i] = int (cur / b) + '0';
  carry = int (cur % b);
 }
 if (a.size() > 1 && a[0] == '0'){
  a.erase(a.begin());
 }
 return a;
}
string asd(string a)
{
 string k="";
 while(a!="0")
    {
     int x = a[a.size()-1] % 2;
  k += ('0' + x);
  a[a.size()-1] -= x;
  a = div2(a);
 }
 reverse(k.begin(), k.end());
 return k;
}
int main(){
    string s;
    getline(cin, s);
    string t="";
    for(int i=0; i < s.size(); i++)
    {
     long long n = 0;
     if(s[i]<='9' && s[i]>='0')
     {
      n = 0;
      string u = "";
      while(i + n < s.size() && s[i+n]<='9' && s[i+n]>='0')
      {
       u += s[i+n];
       n++;
   }
   t = t + asd(u);
   i = i+n-1;
  }
  else 
  {
   t = t + s[i];
  }
 }
 cout << t;
return 0;
}
