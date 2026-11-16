#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD=1000000007;
const ll MAXN=200000;
ll f[MAXN+1],inf[MAXN+1];
ll bp(ll a,ll p){
    ll res=1;
    while(p>0){
        if(p&1) res=res*a%MOD;
        a=a*a%MOD;
        p>>=1;
    }
    return res;
}
ll C(ll n,ll k){
    if(k<0 || k>n) return 0;
    return f[n]*inf[k]%MOD*inf[n-k]%MOD;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    f[0]=1;
    for(ll i=1;i<=MAXN;i++)
        f[i]=f[i-1]*i%MOD;
    inf[MAXN]=bp(f[MAXN],MOD-2);
    for(ll i=MAXN;i>=1;i--)
        inf[i-1]=inf[i]*i%MOD;
    ll t;
    cin >> t;
    while(t--){
        ll n,m,q;
        cin >> n >> m >> q;
        vector<ll> a(n+1,0);
        for(ll i=1;i<=n;i++){
            ll x;
            cin >> x;
            a[i]=a[i-1]+x;
        }
        map<ll,vector<int>> pos;
        ll z=0;
        for(ll k=1;k<n;k++){
            ll d=a[k]-(a[n]-a[n-k]);
            pos[d].push_back(k);
            if(d==0) z++;
        }
        auto cntR=[&](ll val,ll l,ll r)->int{
            auto it=pos.find(val);
            if(it==pos.end()) return 0;
            const auto &p=it->second;
            return int(upper_bound(p.begin(),p.end(),r)-lower_bound(p.begin(),p.end(),l));
        };
        while(q--){
            ll i,v;
            cin >> i >> v;
            ll mir=n+1-i,cnt=z;
            if(i!=mir){
                ll l=min(i,mir);
                ll r=max(i,mir)-1;
                ll del=(i<mir ? v : -v);
                cnt-=cntR(0,l,r);
                cnt+=cntR(-del,l,r);
            }
            cout << C(cnt,m-1) << "\n";
        }
    }
}