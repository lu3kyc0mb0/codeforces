#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,ans=0;
    cin >> a >> b;
    while(a<=b){
        a*=3;
        b*=2;
        ans++;
    }
    cout << ans << "\n";
}