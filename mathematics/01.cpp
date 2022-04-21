#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    cout << "\tlog10(n) = " << log10(n) << endl;
    cout << "\tadding 1 to it " << log10(n) + 1 << endl;
    cout << "\treturning as an integer value ";
    return log10(n) + 1;
}

int main()
{
    int n = 123;

    cout << "-----------------------------------------------------" << endl;
    cout << "=> Program to count the number of digits:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "n = " << n << endl;
    cout << "calling countDigits(n) function:" << endl;
    cout << countDigits(n);
}
