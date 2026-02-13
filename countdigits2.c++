#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    // Convert the integer to a string
    string num = to_string(n);

    // Return the length of the string (i.e., number of digits)
    return num.length();
}

int main()
{
    int n = 58964;
    cout << countDigit(n); 
    return 0;
}
//O(1)-t.c
//O(n)-s.c
