#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    bool f=0;
    for(ll x:{4,7,44,47,74,77,444,447,474,477,744,747,774,777}){
        if(n%x==0) f=1;
    }
    cout<<(f?"YES":"NO");
}