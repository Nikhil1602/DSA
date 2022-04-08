// Write a program to find the factorial of a number:
// INPUT:   5       3
// OUTPUT: 120      6

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int x = 1;
    for (int i = 2; i <= n; i++)
        x = x * i;
    return x;
}

int main()
{

    int n;

    cout << "=====================================" << endl;
    cout << "--> Finding Factorial of number" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the number: ";
    cin >> n;

    int fact = factorial(n);

    cout << "Factorial is: " << fact << endl;
    cout << "=====================================" << endl;
}
