#include <bits/stdc++.h>
using namespace std;

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;

      while (t--)
      {
            int n, k;
            cin >> n >> k;

            unordered_map<int, int> brand_costs;
            for (int i = 0; i < k; i++)
            {
                  int brand, cost;
                  cin >> brand >> cost;

                  // Store the maximum cost for each brand
                  if (brand_costs.find(brand) != brand_costs.end())
                  {
                        brand_costs[brand] = max(brand_costs[brand], cost);
                  }
                  else
                  {
                        brand_costs[brand] = cost;
                  }
            }

            // Collect all unique brand costs
            vector<int> costs;
            for (const auto &pair : brand_costs)
            {
                  costs.push_back(pair.second);
            }

            // Sort costs in descending order to maximize sum
            sort(costs.rbegin(), costs.rend());

            int max_sum = 0;
            int limit = min(n, (int)costs.size());

            // Sum up the highest costs based on the shelf capacity `n`
            for (int i = 0; i < limit; i++)
            {
                  max_sum += costs[i];
            }

            cout << max_sum << "\n";
      }

      return 0;
}
