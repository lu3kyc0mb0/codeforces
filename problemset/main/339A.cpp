#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    vector<int> b;
    for(char c : a)
        if(isdigit(static_cast<unsigned char>(c)))
            b.push_back(c-'0');
    sort(b.begin(),b.end());
    for(size_t i=0;i<b.size();i++){
        if(i>0) cout << "+";
        cout << b[i];
    }
}