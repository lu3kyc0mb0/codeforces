#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> a(n);
    for(auto &[l,r]:a) cin>>l>>r;
    sort(a.begin(),a.end());
    ll i=0,p=0,k=0;
    while(p<m){
        ll r=p;
        while(i<n&&a[i].first<=p){
            r=max(r,a[i].second);
            i++;
        }
        if(r==p){
            cout<<-1;
            return 0;
        }
        p=r;
        k++;
    }
    cout<<k;
}