#include<bits/stdc++.h>
using namespace std;
double p(double a,double b){
    double c=b*100/a;
    return(c);
}
int main(){
    double f,d;
    cin>>f>>d;
    cout << p(f,d);
    return 0;}