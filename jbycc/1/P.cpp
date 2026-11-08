#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,m=1000000007;
    cin>>n>>k;
    vector<ll> d(k+1),e(k+1);
    d[0]=1;
    for(ll i=0;i<n;i++){
        ll a,b,t=0;
        cin>>a>>b;
        for(ll j=0;j<=k;j++){
            if(j>=a) t=(t+d[j-a])%m;
            if(j>b) t=(t-d[j-b-1]+m)%m;
            e[j]=t;
        }
        d.swap(e);
    }
    cout<<d[k];
}