#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
}
//O(n)-t.c
//O(n)-s.c
