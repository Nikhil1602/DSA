#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int s, rev = 0, ld;
    s = n;
    cout << "\trunning while loop:" << endl;

    while (s)
    {
        cout << "\t\tcondition - ( " << s << " != 0 )" << endl;
        cout << "\t\t\tlast digit = " << s << " % 10"
             << " = " << s % 10 << endl;
        ld = s % 10;
        cout << "\t\t\treverse = " << ld << " + "
             << "( " << rev << " * 10 "
             << ") = " << ld + rev * 10 << endl;
        rev = ld + (rev * 10);
        cout << "\t\t\tnew condition = " << s << " / 10"
             << " = " << s / 10 << endl;
        s = s / 10;
    }
    cout << "\twhile loop ends as condition - ( " << s << " != 0"
         << " ) becomes false" << endl;
    cout << "\treturn true if (reverse == n) else false" << endl;
    return rev == n;
}

int main()
{

    int n = 12121;

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "=> program checking number is palindrome or not" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "n = " << n << endl;

    cout << "calling isPalindrome(n) function:" << endl;
    bool palindrome = isPalindrome(n);

    cout << "function ends here:" << endl;
    cout << "Palindrome: ";
    palindrome ? cout << "YES" << endl : cout << "NO" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
}
