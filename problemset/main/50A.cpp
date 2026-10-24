#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m,n;
    cin >> m >> n;
    ll a=m*n, ans=0;
    while(a>1){
        a-=2;
        ans++;
    }
    cout << ans << "\n";
}