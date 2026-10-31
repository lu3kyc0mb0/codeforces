#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,w,q;
    cin >> n >> w >> q;
    vector<vector<ll>> a(n+1,vector<ll>(w+1)),b(n+2,vector<ll>(w+2,0));
    for(ll i=1;i<=n;i++)
        for(ll j=1;j<=w;j++)
            cin >> a[i][j];
    while(q--){
        ll r1,c1,r2,c2,x;
        cin >> r1 >> c1 >> r2 >> c2 >> x;
        b[r1][c1]+=x;
        b[r1][c2+1]-=x;
        b[r2+1][c1]-=x;
        b[r2+1][c2+1]+=x;
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=w;j++){
            b[i][j]+=b[i-1][j]+b[i][j-1]-b[i-1][j-1];
            cout << a[i][j]+b[i][j] << " ";
        }
        cout << "\n";
    }
}