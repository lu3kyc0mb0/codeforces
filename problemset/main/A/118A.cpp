#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b="aoyeui",res="";
    cin >> a;
    transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
    for(ll i=0;i<a.size();i++)
        if(b.find(a[i])==string::npos){
            res+='.';
            res+=a[i];
        }
    cout << res << "\n";
}