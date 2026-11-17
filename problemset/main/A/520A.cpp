#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    string s;
    cin>>n>>s;
    set<char> a;
    for(char c:s) a.insert(tolower(c));
    cout<<(a.size()==26?"YES":"NO");
}