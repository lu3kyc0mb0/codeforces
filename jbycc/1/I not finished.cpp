#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,s,cs=0,c=0;
    cin >> n >> s;
    unordered_map<ll,ll> a;
    a[0]=1;
    for(ll i=0;i<n;i++){
        ll v;
        cin >> v;
        cs+=v;
        if(cs%s==0) c++;
        a[cs]++;
    }
    cout << c << "\n";
}
