#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> p(n+1,vector<ll>(n+1));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>p[i][j];
            p[i][j]+=p[i-1][j]+p[i][j-1]-p[i-1][j-1];
        }
    }
    ll m=n-k+1,z=LLONG_MIN/4;
    vector<vector<ll>> a(m+2,vector<ll>(m+2,z));
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=m;j++){
            a[i][j]=p[i+k-1][j+k-1]-p[i-1][j+k-1]
                    -p[i+k-1][j-1]+p[i-1][j-1];
        }
    }
    vector<vector<ll>>().swap(p);
    auto b=a,c=a,d=a,e=a;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=m;j++){
            b[i][j]=max({a[i][j],b[i-1][j],b[i][j-1]});
        }
        for(ll j=m;j>=1;j--){
            c[i][j]=max({a[i][j],c[i-1][j],c[i][j+1]});
        }
    }
    for(ll i=m;i>=1;i--){
        for(ll j=1;j<=m;j++){
            d[i][j]=max({a[i][j],d[i+1][j],d[i][j-1]});
        }
        for(ll j=m;j>=1;j--){
            e[i][j]=max({a[i][j],e[i+1][j],e[i][j+1]});
        }
    }
    ll ans=z;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=m;j++){
            if(i>k&&i+k<=m){
                ans=max(ans,b[i-k][m]+a[i][j]+d[i+k][m]);
            }
            if(j>k&&j+k<=m){
                ans=max(ans,b[m][j-k]+a[i][j]+c[m][j+k]);
            }
            if(i+k<=m&&j+k<=m){
                ans=max(ans,b[i][m]+d[i+k][j]+e[i+k][j+k]);
                ans=max(ans,d[i+k][m]+b[i][j]+c[i][j+k]);
                ans=max(ans,b[m][j]+c[i][j+k]+e[i+k][j+k]);
                ans=max(ans,c[m][j+k]+b[i][j]+d[i+k][j]);
            }
        }
    }
    cout<<ans;
}