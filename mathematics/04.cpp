#include <bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    int res = 0;

    cout << "\tInitialize result = 0," << endl;
    cout << "\trunning loop:" << endl;

    for (int i = 5; i < n; i *= 5)
    {
        cout << "\t\titeration - ( " << i << " < " << n << " ), result = " << res << " + ( " << n << " / " << i << " ) = " << res + n / i << endl;
        res = res + n / i;
    }
    cout << "\tloop ends here:" << endl;
    cout << "\treturn the result" << endl;
    return res;
}

int main()
{

    int n = 100;

    cout << "--------------------------------------------------------------" << endl;
    cout << "=> Find trailing zeros in a given number" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "n = " << n << endl;
    cout << "calling countZeros(n) function:" << endl;

    int zeros = countZeros(n);

    cout << "function ends here:" << endl;
    cout << "Number of trailing zeros: " << zeros << endl;
    cout << "--------------------------------------------------------------" << endl;
}