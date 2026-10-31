#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,w,q;
    cin >> n >> w >> q;
    vector<vector<ll>> a(n,vector<ll>(w)),b(n+1,vector<ll>(w+1,0));
    for(ll i=0;i<n;i++)
        for(ll j=0;j<w;j++)
            cin >> a[i][j];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<w;j++){
            b[i+1][j+1]=a[i][j];
            if(i>0) b[i+1][j+1]+=b[i][j+1];
            if(j>0) b[i+1][j+1]+=b[i+1][j];
            if(i>0 && j>0) b[i+1][j+1]-=b[i][j];
        }
    while(q--){
        ll r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << b[r2][c2]-b[r1-1][c2]-b[r2][c1-1]+b[r1-1][c1-1] << "\n";
    }
}