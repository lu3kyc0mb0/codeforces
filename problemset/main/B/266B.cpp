#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (ll j = 0; j < t; j++) {
        for (ll i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s << "\n";
}