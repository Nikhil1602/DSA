// Write a program to find the GCD / HCF of two numbers:
// INPUT:   4   6       2
// OUTPUT:  100 200     100

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

int main()
{

    int n, m;

    cout << "=====================================" << endl;
    cout << "--> Find GCD of two numbers" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the 1st number: ";
    cin >> n;
    cout << "Enter the 2nd number: ";
    cin >> m;

    int hcf = gcd(n, m);

    cout << "GCD is: " << hcf << endl;
    cout << "=====================================" << endl;
}
