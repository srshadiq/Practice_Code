#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f = 0, t = 0, s = 0, th = 0, o = 0, ans = INT_MAX;
        vector<int> v1 = {15, 10, 6, 3, 1};
        vector<int> v2 = {15, 6, 3, 1};
        vector<int> v3 = {15, 3, 1};
        vector<int> v4 = {15, 1};
        vector<int> v5 = {1};

        vector<int> v6 = {15, 10, 3, 1};
        vector<int> v7 = {15, 10, 1};

        vector<int> v8 = {15, 10, 6, 1};
        vector<int> v9 = {10, 3, 1};
        vector<int> v10 = {10, 1};
        vector<int> v11 = {6, 1};
        vector<int> v12 = {3, 1};

        for (int i = 0; i < v1.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v1.size(); j++)
            {
                sum += x / v1[j];
                x %= v1[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v2.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v2.size(); j++)
            {
                sum += x / v2[j];
                x %= v2[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v3.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v3.size(); j++)
            {
                sum += x / v3[j];
                x %= v3[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v4.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v4.size(); j++)
            {
                sum += x / v4[j];
                x %= v4[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v5.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v5.size(); j++)
            {
                sum += x / v5[j];
                x %= v5[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v6.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v6.size(); j++)
            {
                sum += x / v6[j];
                x %= v6[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v7.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v7.size(); j++)
            {
                sum += x / v7[j];
                x %= v7[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v8.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v8.size(); j++)
            {
                sum += x / v8[j];
                x %= v8[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v9.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v9.size(); j++)
            {
                sum += x / v9[j];
                x %= v9[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v10.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v10.size(); j++)
            {
                sum += x / v10[j];
                x %= v10[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v11.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v11.size(); j++)
            {
                sum += x / v11[j];
                x %= v11[j];
            }
            ans = min(ans, sum);
        }
        for (int i = 0; i < v12.size(); i++)
        {
            int x = n;
            int sum = 0;
            for (int j = i; j < v12.size(); j++)
            {
                sum += x / v12[j];
                x %= v12[j];
            }
            ans = min(ans, sum);
        }

        //     vector<int> coins = {1, 3, 6, 10, 15};
        // vector<int> dp(n + 1, INT_MAX);
        // dp[0] = 0;

        // for (int i = 1; i <= n; ++i) {
        //     for (int j = 0; j < coins.size(); ++j) {
        //         if (i >= coins[j] && dp[i - coins[j]] != INT_MAX) {
        //             dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        //         }
        //     }
        // }
        //     cout<<dp[n]<<nl;
        // while(n!=0){
        //     if(n%15==0){
        //         f=f/15;
        //         n%=15;
        //         ans=min(ans,f);
        //     }
        //     if(n%10==0){
        //         t=t/10;
        //         t%=10;
        //     }
        //     if(n%6==0){
        //         s=s/6;
        //         n%=6;
        //     }
        //     if(n%3==0){
        //         th=th/3;
        //     }
        //     if(n%15==0){
        //         f=f/15;
        //     }
        // }
        // f=n/15;
        // n%=15;
        // t=n/10;
        // n%=10;
        // s=n/6;
        // n%=6;
        // th=n/3;
        // n%=3;
        // o=n/1;
        // n%=1;
        // cout<<f+t+s+th+o<<nl;
        cout << ans << nl;
    }
    return 0;
}