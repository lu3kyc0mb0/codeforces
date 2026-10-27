#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,h,ans=0;
    cin >> n >> h;
    vector<ll> a(n);
    for(ll &tmp : a){
        cin >> tmp;
        if(tmp<=h) ans++;
        else if(tmp>h) ans+=2;
    }
    cout << ans << "\n";
}