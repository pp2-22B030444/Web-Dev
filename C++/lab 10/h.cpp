#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;

    vector <int> b;
    set<int> c;
    int x;        
    int k;
    for(int i = 0; i < a; i++){
        cin >> k;
        x = c.size();
        c.insert(k);
        if(x!=c.size()){
            b.push_back(k);
        }
    }


    do{
		for(int i = 0;i<b.size();i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(b.begin(),b.end()));
}