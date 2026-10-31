#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,m;
    cin >> n >> m;
    unordered_map<char,ll> c,d;
    for(ll i=0;i<n;i++){
        char tmp;
        cin >> tmp;
        c[tmp]++;
    }
    for(ll i=0;i<m;i++){
        char tmp;
        cin >> tmp;
        d[tmp]++;
    }
    bool k=true;
    for(char f='a';f<='z';f++){
        ll e=0;
        if(f=='s' || f=='i' || f=='x') e=1;
        if(c[f]-d[f]!=e) k=false;
    }
    cout << (k ? "YES" : "NO") << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}