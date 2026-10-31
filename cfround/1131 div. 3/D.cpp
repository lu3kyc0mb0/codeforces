#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &tmp : a) cin >> tmp;
    sort(a.begin(),a.end());
    ll b=a[n/2],c=0;
    for(ll tmp : a)
        c+=abs(tmp-b);
    ll d=a.back()-a.front();
    cout << c << " " << d << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}