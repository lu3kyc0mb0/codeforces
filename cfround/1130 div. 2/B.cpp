#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    ll ca=count(a.begin(),a.end(),'f');
    ll cb=count(b.begin(),b.end(),'f');
    if(ca<cb){
        swap(a,b);
        swap(ca, cb);
    }
    ll d=ca-cb,p=0,len=0;
    for(ll i=0;i<n;i++){
        if(a[i]=='f')
            len++;
        else{
            p+=len/2;
            len=0;
        }
    }
    p+=len/2;
    cout << max(d-2*p,d%2) << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}