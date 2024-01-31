#include <bits/stdc++.h>
using namespace std;

int main(){
	int zhasik =1;
    int n;
    cin >> n;
    int a[n][n];
    
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		cin >>a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		if(a[i][j]!=a[j][i]){
    			zhasik=0;
    			break;
    			}
		}
	}
	
	if (zhasik==1) cout << "Perfect.";
	else cout<< "Not perfect.";
return 0;
}