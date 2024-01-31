#include<bits/stdc++.h>
using namespace std;
char upper(char s){
        if (s>='a' && s<='z'){
            s=s-32;
            return(s);
        }
    else{
        return(s);}                                      
}

int main(){
    char n;
    cin>>n;
    cout << upper(n);
return 0;}