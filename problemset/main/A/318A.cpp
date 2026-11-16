#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll m=(n+1)/2;
    cout<<(k<=m?2*k-1:2*(k-m));
}