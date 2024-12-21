#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '\\') {
            break;
        }
        cout << s[i];
    }
    return 0;
}