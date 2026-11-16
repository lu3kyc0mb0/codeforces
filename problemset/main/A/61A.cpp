#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    for(ll i=0;i<a.size();i++) cout<<(a[i]!=b[i]);
}