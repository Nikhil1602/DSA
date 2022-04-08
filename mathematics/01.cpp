// Write a program to count the number of digits
// INPUT: 124
// OUTPUT: 3

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    return log10(n) + 1;
}

int main()
{

    int n;

    cout << "=====================================" << endl;
    cout << "--> Counting Number of Digits" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the number: ";
    cin >> n;

    int digits = countDigits(n);

    cout << "Number of Digits: " << digits << endl;
    cout << "=====================================" << endl;
}
