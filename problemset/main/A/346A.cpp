#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,x,g=0,m=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        g=gcd(g,x);
        m=max(m,x);
    }
    cout<<((m/g-n)%2?"Alice":"Bob");
}