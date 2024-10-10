#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const int N = 1e5 + 9;
const int MOD = 10000019;
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
int legendre(int n, int p)
{
    int ans = 0;
    while (n)
    {
        ans += n / p;
        n = n / p;
    }
    return ans % MOD;
}
int power(int n, int b)
{
    int result = 1;
    while (b)
    {
        if (b & 1)
            result = result * 1LL * n % MOD;
        n = n * 1LL * n % MOD;
        b >>= 1;
    }
    return result % MOD;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int tc, cs = 0;
    cin >> tc;
    while (tc--)
    {
        int n, t;
        cin >> n >> t;
        int ans = 1;
        bool ok = false;
        for (auto x : primes)
        {
            int f = legendre(n, x);
            int e = f / t;
            if (e > 0)
            {
                ok = true;
            }
            ans = 1LL * ans * power(x, e) % MOD;
        }
        if (ok == false)
            ans = -1;
        cout << "Case " << ++cs << ": " << ans << nl;
    }
    return 0;
}