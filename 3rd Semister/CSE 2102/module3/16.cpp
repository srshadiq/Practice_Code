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
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int p = n * n - n + 41;
    cout << "Value of f(n)= " << p << endl;
    if (isPrime(p))
    {
        cout << "Number " << p << " is Prime" << endl;
    }
    else
    {
        cout << "Number " << p << " is not Prime" << endl;
    }
    return 0;
}