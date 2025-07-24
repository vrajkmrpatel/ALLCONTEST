#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void solve()
{
      // Your code here
      int n, m, k;
      cin >> n >> m >> k;

      vector<vector<int>> grid(n, vector<int>(m));
      for (int i = 0; i < n; i++)
      {
            for(int j = 0; j<m; j++)
            {
                  cin >> grid[i][j];
            }
      }

      queue<pair<int, pair<int, int>>> q;
      q.push({0, {0, 0}});

      int count = 0;
      int delrow[] = {0, 1};
      int delcol[] = {1, 0};
      while(!q.empty())
      {
            auto it = q.front();
            q.pop();

            int val = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            if(row == n - 1 && col == m - 1 && val == k)
            {
                  count++;
            }
            for(int i = 0; i<2; i++)
            {
                  int r = row + delrow[i];
                  int c = col + delcol[i];

                  if(r < n && r >= 0 && c < m && c >= 0)
                  {
                        int temp = val ^ grid[r][c];
                        q.push({temp, {r, c}});
                  }
            }
            
      }
      cout << count << endl;
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      solve();
      return 0;
}