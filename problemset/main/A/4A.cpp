#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin >> a;
    if(a<=2) cout << "NO\n";
    else if(a%2==0) cout << "YES\n";
    else cout << "NO\n";
}