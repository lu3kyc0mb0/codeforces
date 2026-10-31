#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll x,y,z;
    cin >> x >> y >> z;
    ll n=x+y+z;
    char c;
    if(x>=y && x>=z) c='P';
    else if(y>=x && y>=z) c='R';
    else c='S';
    cout << string(n,c) << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}