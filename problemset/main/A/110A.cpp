#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    ll hn=0;
    cin >> n;
    for(char &tmp : n)
        if(tmp=='4' || tmp=='7') hn++;
    if(hn==4 || hn==7) cout << "YES\n";
    else cout << "NO\n";
}