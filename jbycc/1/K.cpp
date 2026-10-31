#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,q;
    cin >> n >> q;
    vector<ll> a(n+1),b(n+1),c(n+1);
    for(ll i=1;i<=n;i++) cin >> a[i];
    for(ll i=1;i<=n;i++){
        b[i]=b[i-1]+a[i];
        c[i]=c[i-1]+i*a[i];
    }
    for(ll i=0;i<q;i++){
        ll l,r;
        cin >> l >> r;
        l--;
        cout << (c[r]-c[l])-l*(b[r]-b[l]) << "\n";
    }
}