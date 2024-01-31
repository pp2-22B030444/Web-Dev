#include<bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    string a;
    cin >> a;
    int c=0;
    int b;
    for(int i=0;i<=a.size();i++)
    {
        for(int s=a.size();s>a.size();s--)
        {
            swap(a[i], a[i-1]);
        }
        string k = q;
        while(k.find(a) != -1)
        {
            b = k.find(a);
            k.erase(b, q.size());
            c++;
        }

    }
    cout << c;

}