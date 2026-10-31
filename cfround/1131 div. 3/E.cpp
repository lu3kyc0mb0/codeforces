#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        ll tmp;
        cin >> tmp;
        a[i]=(i%2==0 ? tmp:-tmp);
    }
    sort(a.begin(),a.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(i<n/2)
            ans-=a[i];
        else
            ans+=a[i];
    }
    cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}