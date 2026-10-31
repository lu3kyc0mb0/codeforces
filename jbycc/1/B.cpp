#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,q;
    cin >> n >> q;
    vector<ll> a(n), b(n+1);
    for(ll &tmp : a) cin >> tmp;
    for(ll i=0;i<n;i++)
        b[i+1]=b[i]+a[i];
    for(ll i=0;i<q;i++){
        ll l,r;
        cin >> l >> r;
        cout << b[r]-b[l-1] << "\n";
    }
}