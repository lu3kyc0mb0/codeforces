#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll s=0,x;
        for(ll i=0;i<n;i++){
            cin>>x;
            if(i%(k+1)==0) s^=x&1;
        }
        cout<<(s?"Alice\n":"Bob\n");
    }
}