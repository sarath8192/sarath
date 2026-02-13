#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    long long rev = 0;


    while (n != 0) {
      int lastdigit=n%10;
        rev = (rev * 10 )+lastdigit;
        n /= 10;
    }

    return rev;
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
}
//O(log₁₀ n)-t.c
//O(1)-s.c
