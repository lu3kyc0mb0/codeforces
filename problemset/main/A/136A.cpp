#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,x;
    cin>>n;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>x;
        a[x]=i;
    }
    for(ll i=1;i<=n;i++) cout<<a[i]<<' ';
}