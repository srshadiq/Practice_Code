#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    int sqrot = sqrt(n);
    for (int i = 2; i <= sqrot; i++)
        if (n % i == 0)
            return false;

    return true;
}
int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
string toBinary(int n)
{
    string s = "";
    if (n == 0)
    {
        return s += to_string(n);
    }
    while (n != 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }
    return s;
}
int modularEXPO(int base, int exp, int mod)
{
    string binEXP = toBinary(exp);
    int result = 1;
    int power = base % mod;
    for (int i = 0; i < binEXP.size(); i++)
    {
        if (binEXP[i] == '1')
        {
            result = (result * power) % mod;
        }
        power = (power * power) % mod;
    }
    return result;
}
bool isCarmichael(int n)
{
    if (n <= 2 || n % 2 == 0 || isPrime(n))
        return false;
    for (int a = 2; a < n; a++)
    {
        if (GCD(a, n) == 1 && modularEXPO(a, n - 1, n) != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cout << "Enter a composite integer n: ";
    cin >> n;

    if (isCarmichael(n))
        cout << n << " is a Carmichael number." << endl;
    else
        cout << n << " is not a Carmichael number." << endl;
}
