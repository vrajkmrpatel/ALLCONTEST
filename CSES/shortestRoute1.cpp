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

      int n, m;
      cin >> n >> m;

      vector<vector<int>> adj[n + 1];
      for (int i = 0; i < m; i++)
      {
            int u, v, wt;
            cin >> u >> v >> wt;

            adj[u].push_back({v, wt});
      }

      // apply dijkstra shortest path algorithm

      const int INF = 1e18;
      vector<int> dist(n + 1, INF);
      // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
      set<pair<int, int>> st;

      dist[1] = 0;
      // pq.push({0, 1});
      st.insert({0, 1});

      // while (!pq.empty())
      // {
      //       auto it = pq.top();
      //       pq.pop();
      //       int dis = it.first;
      //       int node = it.second;

      //       for (auto edge : adj[node])
      //       {
      //             int adjNode = edge[0];
      //             int edgW = edge[1];

      //             if (dis + edgW < dist[adjNode])
      //             {
      //                   dist[adjNode] = dis + edgW;
      //                   pq.push({dist[adjNode], adjNode});
      //             }
      //       }
      // }

      while (!st.empty())
      {
            auto it = *(st.begin());
            int dis = it.first;
            int node = it.second;
            st.erase(it);

            for (auto edge : adj[node])
            {
                  int adjNode = edge[0];
                  int edgW = edge[1];

                  if (dis + edgW < dist[adjNode])
                  {
                        if(dist[adjNode] != 1e9)
                        {
                              st.erase({dist[adjNode], adjNode});
                        }
                        dist[adjNode] = dis + edgW;
                        st.insert({dist[adjNode], adjNode});
                  }
            }
      }

      for (int i = 1; i <= n; i++)
      {
            cout << dist[i] << " ";
      }

      return 0;
}