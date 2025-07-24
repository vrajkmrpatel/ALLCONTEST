#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int minimumOperations(vector<vector<int>> &grid)
{

      int n = grid.size();
      int m = grid[0].size();

      int minMoves = 0;
      for (int j = 0; j < m; j++)
      {
            for (int i = 0; i < n - 1; i++)
            {
                  if (grid[i][j] >= grid[i+1][j])
                  {
                        minMoves += (grid[i][j] - grid[i+1][j] + 1);
                        grid[i + 1][j] = grid[i][j] + 1;
                  }
            }
      }
      return minMoves;
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      vector<vector<int>> grid = {{3, 2}, {1, 3}, {3, 4}, {0, 1}};
      cout << minimumOperations(grid) << endl;
      return 0;
}