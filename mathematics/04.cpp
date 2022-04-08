// Write a program to find the trailing zeros in a number:
// INPUT:   10      2
// OUTPUT: 100      24

#include <bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    int res = 0;
    for (int i = 5; i < n; i *= 5)
        res = res + n / i;
    return res;
}

int main()
{

    int n;

    cout << "=====================================" << endl;
    cout << "--> Find Trailing Zeros in number" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the number: ";
    cin >> n;

    int zeros = countZeros(n);

    cout << "Number of Trailing Zeros: " << zeros << endl;
    cout << "=====================================" << endl;
}
