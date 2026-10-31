#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll cs=a[0],m=a[0];
    for(ll i=1;i<n;i++){
        if(cs<0)
            cs=0;
        cs+=a[i];
        m=max(cs,m);
    }
    cout << m << "\n";
}