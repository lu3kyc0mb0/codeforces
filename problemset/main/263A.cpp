#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll x=0, z=0, val;
    for(ll i=0;i<5;i++)
        for(ll j=0;j<5;j++){
            cin >> val;
            if(val==1){
                x=i; z=j;
            }
        }
    cout << abs(x-2)+abs(z-2) << "\n";
}