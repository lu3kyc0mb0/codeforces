#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<ll>> g(n);
        for(ll i=1,u,v;i<n;i++){
            cin>>u>>v;
            u--;
            v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<ll> p(n,-1),s(n,0),q={0};
        p[0]=0;
        for(ll i=0;i<n;i++){
            ll v=q[i];
            for(ll u:g[v]){
                if(u==p[v]) continue;
                p[u]=v;
                q.push_back(u);
            }
        }
        ll b=0;
        for(ll i=n-1;i>=0;i--){
            ll v=q[i],x=0,y=0,z=0;
            for(ll u:g[v]){
                if(p[u]!=v) continue;
                s[v]+=s[u];
                ll a=s[u];
                if(a>x){
                    z=y;
                    y=x;
                    x=a;
                }else if(a>y){
                    z=y;
                    y=a;
                }else if(a>z){
                    z=a;
                }
            }
            b=max(b,v==0?y:z);
        }
        cout<<n-b<<'\n';
    }
}