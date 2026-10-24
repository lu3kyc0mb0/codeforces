#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, ans=0;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll &tmp : a)
        cin >> tmp;
    k--;
    for(ll i=0;i<n;i++){
        if(a[i]>=a[k] && a[i]>0) ans++;
    }
    cout << ans << "\n";
}