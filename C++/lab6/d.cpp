#include <iostream>
using namespace std;
int find(int a, int x){
    return(a=x);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(a[i]==x){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}