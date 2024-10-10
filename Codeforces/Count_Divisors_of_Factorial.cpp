#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const int N = 1e6 + 9;
bool is_prime[N];
vector<int> primes;
void seive()
{
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        is_prime[i] = true;
    }
    for (int i = 2; i * i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int n;
    cin >> n;
    ll ans = 1;
    for (auto x : primes)
    {
        if (x > n)
            break;

        int z = n;
        int p = 0;
        while (z)
        {
            p += z / x;
            z /= x;
        }
        ans *= (p + 1);
    }
    cout << ans << nl;

    return 0;
}