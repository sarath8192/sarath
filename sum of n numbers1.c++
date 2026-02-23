#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find sum of first N natural numbers using formula
    int sumOfNaturalNumbers(int N) {
        // Apply formula directly
        return (N * (N + 1)) / 2;
    }
};

// Driver code
int main() {
    Solution obj;
    int N;
    cin >> N;
    cout << obj.sumOfNaturalNumbers(N) << endl;
    return 0;
}


//t.c-O(1()
//s.c-O(1()
