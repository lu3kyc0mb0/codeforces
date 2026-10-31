#include <bits/stdc++.h>
#define ll int64_t
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
        if(l<r){
            a[l]+=x;
            a[r]-=x;
        }
        else{
            a[l]+=x;
            a[n]-=x;
            a[0]+=x;
            a[r]-=x;
        }
    }
    for(ll i=1;i<=n;i++)
        a[i]+=a[i-1];
    for(ll i=0;i<n;i++) cout << a[i] << " ";
    cout << "\n";
}