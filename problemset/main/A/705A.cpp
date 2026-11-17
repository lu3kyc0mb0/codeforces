#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cout<<(i%2?"I hate":"I love");
        cout<<(i==n?" it":" that ");
    }
}