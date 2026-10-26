#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll k,const vector<ll>& a,const vector<ll>& d,ll n,ll x){
    ll cnt=0,cvr=-1;
    for(ll i=0;i<n;i++){
        if(d[i]<=k)
            continue;
        if(a[i]<=cvr)
            continue;
        cnt++;
        if(cnt>x)
            return false;
        cvr=a[i]+2*k;
    }
    return cnt<=x;
}
void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n,0),d(n,0);
    for(ll &tmp : a)
        cin >> tmp;
    sort(a.begin(), a.end());
    for(ll i=0;i<n;i++){
        ll best=LLONG_MAX;
        if(i>0)
            best=min(best, a[i]-a[i-1]);
        if(i+1<n)
            best=min(best,a[i+1]-a[i]);
        d[i]=best;
    }
    ll lo=1,hi=2000000000;
    ll ans=hi;
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(check(mid,a,d,n,x)){
            ans=mid;
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}