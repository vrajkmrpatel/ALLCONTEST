#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int n, m;
vector<string> grid;
pair<int, int> start, endp;

string dirs = "UDLR";
int delrow[] = {-1, 1, 0, 0};
int delcol[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
      return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
}

void solve()
{

      cin >> n >> m;
      grid.resize(n);

      for (int i = 0; i < n; i++)
      {
            cin >> grid[i];
            for (int j = 0; j < m; j++)
            {
                  if (grid[i][j] == 'A')
                        start = {i, j};
                  if (grid[i][j] == 'B')
                        endp = {i, j};
            }
      }

      vector<vector<int>> dist(n, vector<int>(m, 1e9));
      vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
      queue<pair<int, int>> q;

      q.push(start);
      dist[start.first][start.second] = 0;

      while (!q.empty())
      {
            auto it = q.front();
            int r = it.first;
            int c = it.second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                  int nrow = r + delrow[i];
                  int ncol = c + delcol[i];

                  if (isValid(nrow, ncol) && dist[nrow][ncol] == 1e9)
                  {
                        dist[nrow][ncol] = dist[r][c] + 1;
                        parent[nrow][ncol] = {r, c};
                        q.push({nrow, ncol});
                  }
            }
      }

      if (dist[endp.first][endp.second] == 1e9)
      {
            cout << "NO\n";
            return;
      }

      // Reconstruct path
      string path;
      pair<int, int> curr = endp;
      while (curr != start)
      {
            auto it = parent[curr.first][curr.second];
            int px = it.first;
            int py = it.second;

            for (int i = 0; i < 4; i++)
            {
                  if (px + delrow[i] == curr.first && py + delcol[i] == curr.second)
                  {
                        path += dirs[i];
                        break;
                  }
            }
            curr = {px, py};
      }

      reverse(path.begin(), path.end());
      cout << "YES\n"
           << path.size() << "\n"
           << path << "\n";
}
int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      solve();

      return 0;
}