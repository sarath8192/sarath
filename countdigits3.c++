#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    // Use logarithm base 10 to count digits
    // log10(n) gives number of digits minus 1, so add 1
    return floor(log10(n) + 1);
}

int main()
{
    int n = 58964;
    cout << countDigit(n); 
    return 0;
}
//O(!)-t.c
//O(1)-s.c
