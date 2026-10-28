#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,a=0;
    cin >> n;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin >> tmp;
        if(tmp==0) a++;
    }
    if(a==n) cout << "EASY\n";
    else cout << "HARD\n";
}