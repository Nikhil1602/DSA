// Write a program to check whether number is palindrome or not:
// INPUT: 112       123321      1
// OUTPUT: NO       YES         YES

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int s, rev = 0, ld;
    s = n;

    while (s)
    {
        ld = s % 10;
        rev = ld + (rev * 10);
        s = s / 10;
    }

    return rev == n;
}

int main()
{

    int n;

    cout << "=====================================" << endl;
    cout << "--> Checking Palindrome or not" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the number: ";
    cin >> n;

    bool palindrome = isPalindrome(n);

    cout << "Palindrome: ";
    palindrome ? cout << "YES" : cout << "NO";
    cout << endl
         << "=====================================" << endl;
}
