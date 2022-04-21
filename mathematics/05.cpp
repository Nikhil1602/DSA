#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    cout << "\trunning while loop:" << endl;
    while (n != m)
    {
        cout << "\t\tcondition - ( " << n << " != " << m << " ):" << endl;
        cout << "\t\t\tif ( " << n << " > " << m << " )";
        if (n > m)
        {
            cout << ", n = " << n << " - " << m << " = " << n - m << endl;
            n = n - m;
        }
        else
        {
            cout << ", m = " << m << " - " << n << " = " << m - n << endl;
            m = m - n;
        }
    }
    cout << "\tloop ends here as condition - ( " << n << " != " << m << " ) become false" << endl;
    cout << "\treturn any of m or n" << endl;
    return m;
}

int main()
{

    int n = 4, m = 6;

    cout << "--------------------------------------------------------------" << endl;
    cout << "=> Find GCD of two numbers" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "n = " << n << ", m = " << m << endl;
    cout << "calling gcd(n, m) function:" << endl;

    int hcf = gcd(n, m);

    cout << "function ends here:" << endl;
    cout << "GCD is: " << hcf << endl;
    cout << "--------------------------------------------------------------" << endl;
}
