#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans=0;
    if(cin >> n)
        for(ll i=0;i<n;i++){
            ll x, y, z;
            cin >> x >> y >> z;
            if(x+y+z>=2) ans++;
        }
    cout << ans << "\n";
}