#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int max(int a, int b, int c, int d){
    int max=-1e9;
    int arr[]={a,b,c,d};
    for(int i = 0; i <4; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return(max);
}

int main()
{
int x , y , z ,w;
cin >> x >> y >> z>>w;
cout<<max(x,y,z,w);
return 0;
}
