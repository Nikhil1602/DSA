// Write a program to check whether number is prime or not:
// INPUT:   11
// OUTPUT:  YES

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    cout << "\tif ( " << n << " == 1 "
         << ")";
    if (n == 1)
    {
        cout << ", return false" << endl;
        return false;
    }
    cout << endl;
    cout << "\tif ( " << n << " == 2 || " << n << " == 3 )";
    if (n == 2 || n == 3)
    {
        cout << ", return true" << endl;
        return true;
    }
    cout << endl;
    cout << "\tif ( " << n << " % 2 == 0 || " << n << " % 3 == 0 )";
    if (n % 2 == 0 || n % 3 == 0)
    {
        cout << ", return false" << endl;
        return false;
    }
    cout << endl;

    cout << "\trunning for loop:" << endl;

    for (int i = 5; i * i <= n; i += 6)
    {
        cout << "\t\titertation - ( " << i << " <= " << n << " ):" << endl;
        cout << "\t\t\tif ( " << n << " % " << i << " == 0 || " << n << " % "
             << " ( " << i << " + 2 == 0)";
        if (n % i == 0 || n % (i + 2) == 0)
        {
            cout << ", return false" << endl;
            return false;
        }
    }
    cout << "\tloop ends here:" << endl;
    cout << "\treturn true" << endl;
    return true;
}

int main()
{

    int n = 51;

    cout << "--------------------------------------------------------------" << endl;
    cout << "=> Check for prime or not:" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "n = " << n << endl;

    cout << "calling isPrime(n) function" << endl;
    int pr = isPrime(n);
    cout << "function ends here" << endl;
    cout << "Prime: ";
    pr ? cout << "YES" << endl : cout << "NO" << endl;

    cout << "--------------------------------------------------------------" << endl;
}
