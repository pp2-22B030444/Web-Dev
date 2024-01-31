#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max=-1e9, cnt=0;

    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==max){
            cnt++;
        }
    }
    cout << cnt;
}