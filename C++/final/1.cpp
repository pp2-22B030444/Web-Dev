#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    if((s.find('@') == -1|| s.find('.') == -1) || (s.find('.') < s.find('@')) || (s.find('@') == 0) || (s.find('@') != s.rfind('@') || s.find('.') != s.rfind('.')) || s.find('.') == s.length()-1){
        cout << "No";
        return 0;
    }
    cout << "Yes";
    return 0;
}