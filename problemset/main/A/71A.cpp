#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string a;
    ll tmp=0;
    cin >> a;
    if(a.empty()) return;
    if(a.length()<11){
        cout << a << "\n";
        return;
    }
    cout << a[0] << a.length()-2 << a[a.length()-1] << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    if(cin >> x)
        for(ll i=0;i<x;i++)
            solve();
}