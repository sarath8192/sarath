#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    int rev = 0;

    while (x > rev) {
int lastdigit=x%10;
        rev = (rev * 10 )+lastdigit;
        x /= 10;
    }

    return (x == rev || x == rev / 10);
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
//O(log₁₀ n)-t.c
//O(1)-s.c
