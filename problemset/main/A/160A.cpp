#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,s=0,t=0,k=0;
    cin>>n;
    vector<ll> a(n);
    for(ll &x:a){
        cin>>x;
        s+=x;
    }
    sort(a.rbegin(),a.rend());
    while(t<=s-t){
        t+=a[k];
        k++;
    }
    cout<<k;
}