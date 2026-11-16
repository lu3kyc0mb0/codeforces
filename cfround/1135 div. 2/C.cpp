#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD=1000000007;
ll bp(ll a,ll p){
    ll res=1;
    while(p>0){
        if(p&1) res=res*a%MOD;
        a=a*a%MOD;
        p>>=1;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll &tmp : a) cin >> tmp;
        sort(a.rbegin(),a.rend());
        ll ans=1;
        for(ll i=0;i<n;i++){
            if(i+1<n&&a[i]==a[i+1])
                break;
            ans=(ans+bp(a[i]-1,i+1))%MOD;
        }
        cout << ans << "\n";
    }
}