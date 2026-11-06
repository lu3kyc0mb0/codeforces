#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,cnt=0;
    cin >> n;
    vector<ll> a(n);
    vector<bool> used(2 * n + 1, false);
    for(ll &x : a){
        cin >> x;
        used[x]=true;
    }
    set<ll> b;
    for(ll x=1;x<=2*n;x++)
        if(!used[x])
            b.insert(x);
    for(ll i=0;i<n;i++){
        auto it=b.upper_bound(a[i]);
        if(it!=b.end()){
            cnt++;
            b.erase(it);
        }
        else{
            b.erase(b.begin());
        }
    }
    cout << cnt << "\n";
}