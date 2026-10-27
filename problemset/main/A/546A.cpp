#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k,n,w;
    cin >> k >> n >> w;
    ll ans=k*w*(w+1)/2;
    cout << max(0LL, ans-n) << "\n";
}