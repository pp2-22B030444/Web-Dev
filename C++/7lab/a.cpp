#include<bits/stdc++.h>
using namespace std;
int pow(int);
int main(){
    int n,result;
    cin>>n;
    result = pow(n);
    cout << result;
    return 0;
}
int pow (int n){

    if (n>1){
        return pow(2,n);
    }
    else{
        return 1;
    }

}