#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,w,ans=0;
    cin >> n >> w;
    vector<pair<ll,ll>> a(n);
    for(ll i=0;i<n;i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(),a.end());
    for(ll i=n-1;i>=0;i--){
        if(w==0) break;
        ll take=min(a[i].second,w);
        w-=take;
        ans+=a[i].first*take;
    }
    cout << ans << "\n";
}