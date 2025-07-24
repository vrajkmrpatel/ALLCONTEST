#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int n, m, q;
      cin >> n >> m >> q;

      vector<vector<int>> cost(n + 1, vector<int>(n + 1, 1e18));

      for (int j = 1; j <= m; j++)
      {
            int u, v, wt;
            cin >> u >> v >> wt;

            cost[u][v] = min(cost[u][v], wt);
            cost[v][u] = min(cost[v][u], wt);
      }
      for (int i = 1; i <= n; i++)
            cost[i][i] = 0;

      // for (int i = 1; i <= n; i++)
      // {
      //       for (int j = 1; j <= m; j++)
      //       {
      //             cout << cost[i][j] << " ";
      //       }
      //       cout << endl;
      // }

      // input queries
      vector<vector<int>> queries(q);
      for (int i = 0; i < q; i++)
      {
            int r, c;
            cin >> r >> c;
            queries[i] = {r, c};
      }

      // Apply Floyd Warshall's Algorithm
      for (int k = 1; k <= n; k++)
      {
            for (int i = 1; i <= n; i++)
            {
                  for (int j = 1; j <= n; j++)
                  {
                        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
                  }
            }
      }

      // mark unreachable nodes as -1
      for (int i = 1; i <= n; i++)
      {
            for (int j = 1; j <= n; j++)
            {
                  if (cost[i][j] == 1e18)
                  {
                        cost[i][j] = -1;
                  }
            }
      }
      for (auto it : queries)
      {
            int row = it[0];
            int col = it[1];

            cout << cost[row][col] << endl;
      }

      return 0;
}