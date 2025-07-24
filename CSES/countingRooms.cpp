#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void dfs(int row, int col, vector<vector<char>> &mat, vector<vector<int>> &vis)
{
      int n = mat.size();
      int m = mat[0].size();

      vis[row][col] = 1;

      int delrow[] = {-1, 0, 1, 0};
      int delcol[] = {0, 1, 0, -1};

      for (int i = 0; i < 4; i++)
      {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow < n && nrow >= 0 && ncol < m && ncol >= 0 
                  && !vis[nrow][ncol] && mat[nrow][ncol] == '.')
                  {
                        dfs(nrow, ncol, mat, vis);
                  }
      }
}
int solve(vector<vector<char>> &mat)
{
      int n = mat.size();
      int m = mat[0].size();

      // number of connected components dfs
      int cnt = 0;
      vector<vector<int>> vis(n, vector<int>(m, 0));

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  if(!vis[i][j] && mat[i][j] == '.')
                  {
                        cnt++;
                        vis[i][j] = 1;
                        dfs(i, j, mat, vis);
                  }
            }
      }
      return cnt;
}
int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int n, m;
      cin >> n >> m;
      vector<vector<char>> mat(n, vector<char>(m));

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> mat[i][j];
            }
      }

      cout << solve(mat) <<endl;

      return 0;
}