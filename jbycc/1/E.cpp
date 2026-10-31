#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,q;
    cin >> n >> m >> q;
    vector<ll> a(n+1), b(n+1);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=n;i>=1;i--)
        a[i]-=a[i-1];
    while(m--){
        ll l,r,x;
        cin >> l >> r >> x;
        l--;
        a[l]+=x;
        a[r]-=x;
    }
    for(ll i=1;i<=n;i++)
        a[i]+=a[i-1];
    for(ll i=0;i<n;i++)
        b[i+1]=b[i]+a[i];
    for(ll i=0;i<q;i++){
        ll l,r;
        cin >> l >> r;
        cout << b[r]-b[l-1] << "\n";
    }
}