#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,ans=0;
    cin >> n;
    for(ll i=0;i<n;i++){
        pair<ll,ll> a;
        cin >> a.first >> a.second;
        if(a.first+2<=a.second) ans++;
    }
    cout << ans << "\n";
}