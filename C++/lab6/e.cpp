#include<bits/stdc++.h>
using namespace std;
double p(int a, int b){
    return(sqrt(a*a+b*b));
}
int main(){
    int f, j;
    cin >> f >>j;
    cout << setprecision(4)<< p(f,j);
    return 0;}