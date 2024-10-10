#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool MersennePrime(int n)
{
    int p = 0;
    while (pow(2, p) - 1 <= n)
    {
        if (pow(2, p) - 1 == n && isPrime(n))
        {
            return true;
        }
        p++;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    if (MersennePrime(n))
    {
        cout << n << " is Mersenne Prime" << endl;
    }
    else
    {
        cout << n << " is not Mersenne Prime" << endl;
    }
    return 0;
}