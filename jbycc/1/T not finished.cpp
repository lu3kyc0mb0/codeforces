#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> a(n,vector<ll>(n)),b(n+1,vector<ll>(n+1,0));
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            cin >> a[i][j];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++){
            b[i][j]=a[i][j];
            if(i>0) b[i][j]+=b[i-1][j];
            if(j>0) b[i][j]+=b[i][j-1];
            if(i>0 && j>0) b[i][j]-=b[i-1][j-1];
        }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++)
            cout << b[i][j] << " ";
        cout << "\n";
    }
}