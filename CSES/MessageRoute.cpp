#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void shortestPath(int n, int m, vector<pair<int, int>> adj[])
{
      priority_queue<pair<int, int>, vector<pair<int, int>>,
                     greater<pair<int, int>>>
          pq;

      vector<int> dist(n + 1, 1e9);
      vector<int> parent(n + 1);
      for (int i = 0; i < n + 1; i++)
            parent[i] = i;

      dist[1] = 0;
      pq.push({0, 1});

      while (!pq.empty())
      {
            auto it = pq.top();
            int dis = it.first;
            int node = it.second;
            pq.pop();

            for (auto it : adj[node])
            {
                  int adjNode = it.first;
                  int edgW = it.second;

                  if (dis + edgW < dist[adjNode])
                  {
                        dist[adjNode] = dis + edgW;
                        pq.push({dist[adjNode], adjNode});
                        parent[adjNode] = node;
                  }
            }
      }

      if (dist[n] == 1e9)
      {
            cout << "IMPOSSIBLE" << endl;
            return;
      }

      vector<int> path;
      int node = n;
      while (parent[node] != node)
      {
            path.push_back(node);
            node = parent[node];
      }
      path.push_back(1);

      reverse(path.begin(), path.end());

      cout << path.size() << endl;
      for (auto it : path)
      {
            cout << it << " ";
      }
}
int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int n, m;
      cin >> n >> m;

      vector<pair<int, int>> adj[n + 1];
      for (int i = 0; i < m; i++)
      {
            int u, v;
            cin >> u >> v;

            adj[u].push_back({v, 1});
            adj[v].push_back({u, 1});
      }

      shortestPath(n, m, adj);

      return 0;
}