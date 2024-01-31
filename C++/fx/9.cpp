#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    
    int n,y;
    cin>>n;
    stack <int> s;
    stack<int> t;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==1){
         cin>>y;
         s.push(y);
         cout<< "Interested!"<<endl;
        }
        else if(x==2){
            cout <<"Top"<<" " <<s.top()<<endl;
        }
        else if (x==3){
           
            cout << "Deleted"<<" "<<s.top()<<endl;
             s.pop();
        }
        else if(x==4){
            cout <<s.size()<< endl;
        }
}
for (t =s; !t.empty(); t.pop())
cout << t.top() << " ";}