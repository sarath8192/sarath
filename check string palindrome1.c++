#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome.
int isPalindrome(string &s){
  
  int len = s.length();

    // Iterate over the first half of the string
    for (int i = 0; i < len / 2; i++){

        // If the characters at symmetric positions are not equal
        if (s[i] != s[len - i - 1])

            // Return 0 (not a palindrome)
            return 0;
    }

    // If all symmetric characters are equal
    // then it is palindrome
    return 1;
}

int main(){
    string s = "abba";
    cout << isPalindrome(s) << endl;

    return 0;
}


//t.c-O(N)
//s.c-O(1)
