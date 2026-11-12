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
        map<ll,ll> m;
        for(ll i=0,x;i<n;i++){
            cin>>x;
            m[x]++;
        }
        vector<ll> a,b;
        ll k=0;
        for(auto [x,c]:m){
            k+=min(c,2LL);
            a.push_back(x);
            for(ll i=1;i<c;i++) b.push_back(x);
        }
        reverse(b.begin(),b.end());
        cout<<k<<'\n';
        for(ll x:a) cout<<x<<' ';
        for(ll x:b) cout<<x<<' ';
        cout<<'\n';
    }
}