#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll h,w,d;
    cin >> h >> w >> d;
    vector<pair<ll,ll>> pos(h*w+1);
    vector<ll> cost(h*w+1);
    for(ll i=0;i<h;i++) 
        for(ll j=0;j<w;j++){
            ll v;
            cin >> v;
            pos[v]={i,j};
        }
    for(ll i=d+1;i<=h*w;i++)
        cost[i]=cost[i-d]+abs(pos[i-d].first-pos[i].first)+abs(pos[i-d].second-pos[i].second);
    ll q;
    cin >> q;
    while(q--){
        ll l,r;
        cin >> l >> r;
        cout << cost[r]-cost[l] << "\n";
    }
}   