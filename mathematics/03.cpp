#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    cout << "\tInitialize x = 1," << endl;
    cout << "\trunning loop:" << endl;
    int x = 1;
    for (int i = 2; i <= n; i++)
    {
        cout << "\t\t( " << i << " <= " << n << " ), x = " << x << " * " << i << " = " << x * i << endl;
        x = x * i;
    }
    cout << "\tloop ends here:" << endl;
    cout << "\treturn x" << endl;
    return x;
}

int main()
{

    int n = 5;

    cout << "--------------------------------------------------------------" << endl;
    cout << "=> Finding factorial of number" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "n = " << n << endl;
    cout << "calling factorial(n) function:" << endl;

    int fact = factorial(n);

    cout << "function ends here:" << endl;
    cout << "factorial is: " << fact << endl;
    cout << "--------------------------------------------------------------" << endl;
}
