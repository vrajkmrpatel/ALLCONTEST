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
            return 1;
        else
            return 0;
    }

    if (dp[ind][amount] != -1)
        return dp[ind][amount];

    int notTake = 0 + solve(ind - 1, coins, amount, dp);
    int take = 0;
    if (coins[ind] <= amount)
        take = 1 + solve(ind, coins, amount - coins[ind], dp);
    return dp[ind][amount] = take + notTake;
}
int coinsCombination(int n, vector<int> &coins, int amount)
{
    // Brute Force using Recursion
    // int ans = solve(n - 1, coins, amount);

    vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
    int ans = solve(n - 1, coins, amount, dp);
    if(ans >= 1e9)
    {
        return -1;
    }
    return ans;

    // Tabulation
    // vector<int> prev(amount + 1, 0);

    // // base cases
    // for (int T = 0; T <= amount; T++)
    // {
    //     if (T % coins[0] == 0)
    //     {
    //         prev[T] = 1;
    //     }
    // }

    // for (int ind = 1; ind < n; ind++)
    // {
    //     for (int T = 0; T <= amount; T++)
    //     {
    //         int notTake = 0 + prev[T];
    //         int take = 0;
    //         if (coins[ind] <= T)
    //             take = prev[T - coins[ind]];
    //         prev[T] = take + notTake;
    //     }
    // }

    // return prev[amount];
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