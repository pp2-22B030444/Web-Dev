#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string y;
    stack <string> s;
    for(int i=0; i<n;i++){
        string x;
        cin>>x;
        if(x=="add"){
        cin>>y;
        s.push(y);
        }
        else if(x=="print"){
            cout <<s.top()<<endl;
        }
        else if (x=="delete"){
          s.pop();
        }
       
        }}