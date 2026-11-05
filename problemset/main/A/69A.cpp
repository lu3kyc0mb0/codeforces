#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,x,y,z,a=0,b=0,c=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    cout<<((a==0&&b==0&&c==0)?"YES":"NO");
}