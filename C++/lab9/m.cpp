#include <bits/stdc++.h>
using namespace std;
int main(){
  queue <string> m;
  int n;
  cin >> n;
  for (int i=0; i<n;i++){
    int a;
    cin >> a;
    if (a==2){
        m.pop();
    }
    else{
        string s;
        cin>>s;
        m.push(s);
    }
    if (!m.empty()){
        cout << m.front()<< endl;
    }
    else{
        cout<<"queue is empty"<< endl;
    }
  }
  
}
