#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,s=0,t=0;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0,d;i<n;i++){
        cin>>a[i]>>d;
        s+=d;
    }
    sort(a.begin(),a.end());
    for(ll x:a){
        t+=x;
        s-=t;
    }
    cout<<s;
}