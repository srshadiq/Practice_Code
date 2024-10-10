#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int ans(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;

    int prev1 = 0, prev2 = 1;
    for (int i = 3; i <= n; ++i) {
        int current = (1LL * (i - 1) * (prev1 + prev2)) % M;
        prev1 = prev2;
        prev2 = current;
    }

    return prev2;
}

int main()
{
    int n;
    cin >> n;
    cout << ans(n) << endl;
    return 0;
}
