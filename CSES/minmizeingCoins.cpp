#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int solve(int ind, vector<int> &coins, int amount, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (amount % coins[0] == 0)
            return amount / coins[0];
        else
            return 1e9;
    }

    if (dp[ind][amount] != -1)
        return dp[ind][amount];

    int notTake = 0 + solve(ind - 1, coins, amount, dp);
    int take = 1e9;
    if (coins[ind] <= amount)
        take = 1 + solve(ind, coins, amount - coins[ind], dp);
    return dp[ind][amount] = min(take, notTake);
}
int coinsCombination(int n, vector<int> &coins, int amount)
{
    // Brute Force using Recursion
    // int ans = solve(n - 1, coins, amount);
    // if(ans >= 1e9)
    // {
    //     return -1;
    // }
    // return ans;

    // Using Memoization
    // vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
    // int ans = solve(n - 1, coins, amount, dp);
    // if(ans >= 1e9)
    // {
    //     return -1;
    // }
    // return ans;

    // // Tabulation
    vector<vector<int>> dp(n, vector<int>(amount + 1, 0));

    // base case
    for (int T = 0; T <= amount; T++)
    {
        if (T % coins[0] == 0)
        {
            dp[0][T] = T / coins[0];
        }
        else
        {
            dp[0][T] = 1e9;
        }
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int T = 0; T <= amount; T++)
        {
            int notTake = 0 + dp[ind - 1][T];
            int take = INT_MAX;
            if (coins[ind] <= T)
                take = 1 + dp[ind][T - coins[ind]];

            dp[ind][T] = min(take, notTake);
        }
    }

    int ans = dp[n - 1][amount];
    if (ans >= 1e9)
        return -1;
    else
        return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int count = coinsCombination(n, coins, x);
    cout << count << endl;

    return 0;
}