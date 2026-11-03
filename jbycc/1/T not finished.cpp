#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> a(n,vector<ll>(n)),b(n+1,vector<ll>(n+1,0));
    ll k=n-m+1;
    vector<vector<ll>> sq(k,vector<ll>(k));
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            cin >> a[i][j];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            b[i+1][j+1]=a[i][j]+b[i][j+1]+b[i+1][j]-b[i][j];
    for(ll i=0;i<k;i++)
        for(ll j=0;j<k;j++)
            sq[i][j]=b[i+m][j+m]-b[i][j+m]-b[i+m][j]+b[i][j];
    for(ll i=0;i<k;i++){
        for(ll j=0;j<k;j++)
            cout << sq[i][j] << " ";
        cout << "\n";
    }
}