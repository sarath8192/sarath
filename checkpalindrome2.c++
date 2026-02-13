#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
//O(n)-t.c
//O(n)-s.c

