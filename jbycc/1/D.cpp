#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n+1);
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
    for(ll i=0;i<n;i++) cout << a[i] << " ";
    cout << "\n";
}