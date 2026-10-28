#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,j=0,m=0;
    cin >> n;
    for(ll i=0;i<n;i++){
        ll tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        j+=tmp2-tmp1;
        if(j>=m) m=j;
    }
    cout << m << "\n";
}