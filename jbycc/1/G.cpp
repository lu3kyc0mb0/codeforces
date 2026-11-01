#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,h=0,p=0,s=0;
    cin >> n;
    vector<char> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        if(a[i]=='S') h++;
        if(a[i]=='H') p++;
        if(a[i]=='P') s++;
    }
    ll hh=0,pp=0,ss=0,ans=0;
    for(ll i=0;i<=n;i++){
        ans=max(ans,max({hh,pp,ss})+max({h,p,s}));
        if(i==n) break;
        if(a[i]=='S') h--,hh++;
        if(a[i]=='H') p--,pp++;
        if(a[i]=='P') s--,ss++;
    }
    cout << ans;
}
