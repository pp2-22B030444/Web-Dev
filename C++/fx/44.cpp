#include <iostream>
#include <string>
 using namespace std;
void toBinary(int n,int cnt)
{ 
    if (n / 2 != 0) {
        n/=2;
    }
 
    if( n % 2 == 1){
       cnt++;
     }
}
 
int main()
{
    int n, cnt = 0 ;
    cin>>n;
    toBinary(n,cnt);
    cout<<6 - cnt;
 
    return 0;}