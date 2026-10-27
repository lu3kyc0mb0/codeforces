#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0;
    cin >> n;
    string a;
    cin >> a;
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]) ans++;
    }
    cout << ans << "\n";
}