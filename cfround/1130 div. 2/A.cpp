#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),pos(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        pos[a[i]]=i;
    }
    ll m=n-k+1;
    vector<bool> in(n+1, false);
    for(ll i=0;i<m;i++)
        in[a[i]]=true;
    ll x=0;
    while(in[x])
        x++;
    if(x==m){
        cout << "-1\n";
        return;
    }
    ll big=0;
    while(a[big]<m) big++;
    cout << big+1 << " " << pos[x]+1 << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}