#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,x,s=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        s+=x;
    }
    cout<<fixed<<setprecision(10)<<(double)s/n;
}