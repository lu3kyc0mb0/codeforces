#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    ll n=s.size();
    vector d(n,vector<ll>(n));
    for(ll l=n-1;l>=0;l--)
        for(ll r=l;r<n;r++){
            if(l==r)
                d[l][r]=1;
            else if(s[l]==s[r])
                d[l][r]=d[l+1][r-1]+2;
            else
                d[l][r]=max(d[l+1][r],d[l][r-1]);
        }
    cout << d[0][n-1] << "\n";
}