#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll, ll> c;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        c[a[i]]++;
    }
    ll av=0, mex=0;
    while(true){
        if(c[mex]==0) break;
        av+=c[mex];
        if(av>=k){
            av-=k;
            mex++;
        }
        else break;
    }
    cout << mex << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    if(cin >> n)
        for(ll i=0;i<n;i++)
            solve();
}