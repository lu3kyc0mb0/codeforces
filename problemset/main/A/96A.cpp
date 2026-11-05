#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    cout<<((s.find("0000000")!=string::npos||s.find("1111111")!=string::npos)?"YES":"NO");
}