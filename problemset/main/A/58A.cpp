#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,tar="hello";
    cin >> s;
    ll j=0;
    for(ll i=0;i<s.size();i++){
        if(s[i] == tar[j]) j++;
        if(j == tar.size()) break;
    }
    if(j == tar.size()) cout << "YES\n";
    else cout << "NO\n";
}