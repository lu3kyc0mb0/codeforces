#include <bits\stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c) {
        return tolower(c);
    });
    transform(b.begin(), b.end(), b.begin(), [](unsigned char c) {
        return tolower(c);
    });
    if(a>b)
        cout << "1\n";
    else if(a<b)
        cout << "-1\n";
    else
        cout << "0\n";
}