#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const int N = 1e6 + 9;
bool is_prime[N];
vector<int> prime;

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
            prime.push_back(i);
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
    for (auto p : prime)
    {
        int diff = n - p;
        if (is_prime[diff])
        {
            cout << p << " + " << diff << " = " << n << nl;
            return 0;
        }
    }
    return 0;
}