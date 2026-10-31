#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &tmp : a) cin >> tmp;
    b[0]=a[0];
    for(ll i=1;i<n;i++)
        b[i]=b[i-1]+a[i];
    for(ll i=0;i<n;i++)
        cout << b[i] << " ";
    cout << "\n";
}