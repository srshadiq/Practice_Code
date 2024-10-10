#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sn, tn;
    cout << "Enter the value of a & b: " << endl;
    cin >> a >> b;
    int A = a, B = b;
    int s0 = 1, s1 = 0, t0 = 0, t1 = 1;
    int q, r, s, t;

    while (b != 0)
    {
        q = a / b;
        r = a % b;
        a = b;
        b = r;

        s = s0 - q * s1;
        t = t0 - q * t1;

        s0 = s1;
        s1 = s;
        t0 = t1;
        t1 = t;
    }
    cout << "GCD(" << A << ", " << B << ") = " << A * s0 + B * t0 << endl;
    cout << "Extended GCD(" << A << "," << B << ") = " << s0 << "*" << A << " + " << t0 << "*" << B << endl;
}