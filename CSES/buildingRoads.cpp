#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

class DisjointSet
{
      vector<int> rank, parent, size;

public:
      DisjointSet(int n)
      {
            rank.resize(n + 1, 0);
            parent.resize(n + 1);
            size.resize(n + 1);
            for (int i = 1; i <= n; i++)
            {
                  parent[i] = i;
                  size[i] = 1;
            }
      }

      int findParent(int node)
      {
            if (node == parent[node])
            {
                  return node;
            }
            return parent[node] = findParent(parent[node]);
      }

      void unionByRank(int u, int v)
      {
            int ulp_u = findParent(u);
            int ulp_v = findParent(v);
            if (ulp_u == ulp_v)
                  return;
            if (rank[ulp_u] < rank[ulp_v])
            {
                  parent[ulp_u] = ulp_v;
            }
            else if (rank[ulp_v] < rank[ulp_u])
            {
                  parent[ulp_v] = ulp_u;
            }
            else
            {
                  parent[ulp_v] = ulp_u;
                  rank[ulp_u]++;
            }
      }

      void unionBySize(int u, int v)
      {
            int ulp_u = findParent(u);
            int ulp_v = findParent(v);
            if (ulp_u == ulp_v)
                  return;
            if (size[ulp_u] < size[ulp_v])
            {
                  parent[ulp_u] = ulp_v;
                  size[ulp_v] += size[ulp_u];
            }
            else
            {
                  parent[ulp_v] = ulp_u;
                  size[ulp_u] += size[ulp_v];
            }
      }
};

void makeConnected(int n, vector<vector<int>> &connections)
{

      DisjointSet ds(n);
      int extraN = 0;
      for (auto it : connections)
      {
            int u = it[0];
            int v = it[1];

            if (ds.findParent(u) == ds.findParent(v))
            {
                  extraN++;
            }
            else
            {
                  ds.unionBySize(u, v);
            }
      }

      int cntC = 0;
      vector<int> leaders;
      for (int i = 1; i <= n; i++)
      {
            if (ds.findParent(i) == i)
            {
                  cntC++;
                  leaders.push_back(i);
            }
      }
      int ans = cntC - 1;

      vector<vector<int>> toConnect;
      for (size_t i = 1; i < leaders.size(); i++)
      {
            toConnect.push_back({leaders[i - 1], leaders[i]});
      }

      cout << ans << endl;
      for (auto it : toConnect)
      {
            cout << it[0] << " " << it[1] << endl;
      }
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int n, m;
      cin >> n >> m;
      vector<vector<int>> connections(m);

      for (int i = 0; i < m; i++)
      {
            int u, v;
            cin >> u >> v;
            connections[i] = {u, v};
      }

      makeConnected(n, connections);

      return 0;
}