#include <bits/stdc++.h>
using namespace std;
int main(){	//16 25 36 49 64 81 
    stack<char> st;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
        if(!st.size())
            st.push(s[i]);
        else if
        (
            (st.top() == '1' && s[i] == '6') ||
            (st.top() == '2' && s[i] == '5') ||
            (st.top() == '3' && s[i] == '6') ||
            (st.top() == '4' && s[i] == '9') ||
            (st.top() == '6' && s[i] == '4') ||
            (st.top() == '8' && s[i] == '1') 
        ){
            st.pop();
        }
        else st.push(s[i]);
    }

    if(st.size() == 0){
        cout<<"Stack is empty"; 
    }
    else{
    string ans;
    while(st.size()){
        ans += st.top();
        st.pop();
    }
    
    for (int i = 0; i < ans.length(); i++)
    {
        cout<<ans[i];
    }
    }
    

    
    
    

}