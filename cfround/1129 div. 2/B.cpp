#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    ll mn=INT_MAX;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        mn=min(mn,x);
    }
    cout << (mn<n ? n:0) << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}