#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> g(n+1);
    for(ll i=0;i<n-1;i++){
        ll x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<ll> br(n+1,0),p(n+1,0);
    queue<ll> q;
    q.push(1);
    p[1]=-1;
    while(!q.empty()){
        ll u = q.front(); q.pop();
        for(ll v : g[u]){
            if(v==p[u]) continue;
            p[v]=u; br[v]=(u==1 ? v:br[u]);
            q.push(v);
        }
    }
    vector<ll> d(n+1,-1);
    d[n]=0;
    q.push(n);
    while(!q.empty()){
        ll u=q.front();
        q.pop();
        for(ll v : g[u]) {
            if(d[v]!=-1) continue;
            d[v]=d[u]+1;
            q.push(v);
        }
    }
    ll ans=d[1];
    for(ll i=0;i<m;i++) {
        ll v;
        cin >> v;
        if(br[v]==br[n])
            ans=max(ans,1+d[v]);
    }
    cout << ans << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}