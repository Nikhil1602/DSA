#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    cout << "\t\trunning while loop:" << endl;
    while (n != m)
    {
        cout << "\t\t\tcondition - ( " << n << " != " << m << " ):" << endl;
        cout << "\t\t\t\tif ( " << n << " > " << m << " )";
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
    cout << "\t\tloop ends here as condition - ( " << n << " != " << m << " ) become false" << endl;
    cout << "\t\treturn any of m or n" << endl;
    cout << "\treturn numerator / denominator" << endl;
    return m;
}

int lcm(int a, int b)
{
    cout << "\tnumerator = " << a << " * " << b << " = " << a * b << endl;
    cout << "\tdenominator = calling gcd(a, b) function:" << endl;
    return (a * b) / gcd(a, b);
}

int main()
{

    int n = 12, m = 15;

    cout << "--------------------------------------------------------------" << endl;
    cout << "=> LCM of two numbers:" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "n = " << n << ", m = " << m << endl;
    cout << "calling lcm(n, m) function:" << endl;

    int res = lcm(n, m);

    cout << "function ends here" << endl;
    cout << "LCM is: " << res << endl;
    cout << "--------------------------------------------------------------" << endl;
}
