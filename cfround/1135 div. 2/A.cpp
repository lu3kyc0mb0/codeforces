#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n<4){
            cout << -1 << "\n";
            continue;
        }
        vector<ll> p(n+1);
        iota(p.begin(),p.end(),0);
        swap(p[1],p[4]);
        for(ll i=1;i<=n;i++)
            cout << p[i] << " ";
        cout << "\n";
    }
}