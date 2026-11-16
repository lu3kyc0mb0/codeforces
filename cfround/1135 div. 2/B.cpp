#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        string s;
        cin >> n >> k >> s;
        ll z=count(s.begin(),s.end(),'0');
        ll o=n-z;
        ll sm=min(z,o);
        ll bi=max(z,o);
        ll f=min<ll>(k,sm);
        sm-=f; bi+=f;
        cout << 1+sm*(sm+1)/2+bi*(bi+1)/2 << "\n";
    }
}