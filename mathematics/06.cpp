// Write a program to find the LCM of two numbers:
// INPUT:   4    6      12
// OUTPUT:  12   15     60

#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    while (n != m)
    {
        if (n > m)
            n = n - m;
        else
            m = m - n;
    }
    return m;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{

    int n, m;

    cout << "=====================================" << endl;
    cout << "--> LCM of two numbers:" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the 1st number: ";
    cin >> n;
    cout << "Enter the 2nd number: ";
    cin >> m;

    int res = lcm(n, m);

    cout << "LCM is: " << res << endl;
    cout << "=====================================" << endl;
}
