// Write a program to check whether number is prime or not:
// INPUT:   11
// OUTPUT:  YES

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{

    int n;

    cout << "=====================================" << endl;
    cout << "--> Check for prime or not:" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Prime: ";
    isPrime(n) ? cout << "YES" : cout << "NO";

    cout << endl
         << "=====================================" << endl;
}
