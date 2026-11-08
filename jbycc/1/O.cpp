#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,m=1000000007;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll> d(n);
    d[0]=1;
    ll t=1;
    for(ll i=1;i<n;i++){
        if(s[i]=='.') d[i]=t;
        t=(t+d[i])%m;
        if(i>=k) t=(t-d[i-k]+m)%m;
    }
    cout<<d[n-1];
}