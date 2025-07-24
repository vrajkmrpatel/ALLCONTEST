#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int countSpecialSubsequences(vector<int> &nums)
{
      int n = nums.size();
      int specialCount = 0;

      // Iterate through possible indices for r
      for (int r = 2; r < n - 1; ++r)
      {
            unordered_map<int, int> leftProductCount;

            // Count products nums[p] * nums[r] for all p < r - 1
            for (int p = 0; p < r - 1; ++p)
            {
                  int product = nums[p] * nums[r];
                  leftProductCount[product]++;
            }

            // Match products nums[q] * nums[s] for all q, s > r
            for (int s = r + 2; s < n; ++s)
            {
                  int product = nums[r] * nums[s];
                  if (leftProductCount.find(product) != leftProductCount.end())
                  {
                        specialCount += leftProductCount[product];
                  }
            }
      }

      return specialCount;
}
int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      vector<int> nums = {1, 2, 3, 4, 3, 6, 1};
      cout << countSpecialSubsequences(nums) << endl;

      return 0;
}