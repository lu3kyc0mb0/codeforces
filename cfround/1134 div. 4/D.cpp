#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        bool a[26]={};
        for(ll i=0;i<n/2;i++){
            ll l=s[i]-'a',r=s[n-1-i]-'a';
            if(l>r) swap(l,r);
            for(ll j=l;j<r;j++) a[j]=1;
        }
        ll k=0;
        for(ll i=0;i<25;i++) k+=a[i];
        cout<<k<<'\n';
    }
}