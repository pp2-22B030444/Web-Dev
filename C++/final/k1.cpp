#include <bits/stdc++.h> 
using namespace std; 
int main (){ 
    map <string ,string> mp; 
    map <string ,string>::iterator it;
    int n; 
    bool zhas = false;
    cin>> n;string s,t; 
    for(int i=0; i<n; i++)
 { 
        cin>> s>>t; 
     for (it=mp.begin(); it!=mp.end(); ++it)
  { 
         if (it->second==s)
   { 
             zhas = true;
             mp[it->first]=t;  
      } 
  }
     if(zhas==false) mp[s]=t;
    } 
  for (it=mp.begin(); it!=mp.end(); ++it) cout <<it->first<<" "<<it->second<<endl;
}
