#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    if (n.find("@@gmail.com")!= -1) {
        cout << "no";
    }   
    else if(n.find("@gmail.com")!= -1 || n.find("@kbtu.kz")!= -1 || n.find("@mail.ru") ){
           cout << "yes";}
       
    else 
    cout << "no";}
