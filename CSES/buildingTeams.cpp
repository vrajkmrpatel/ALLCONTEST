#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

bool check(int start, vector<vector<int>> &adj, vector<int> &color)
{
    queue<int> q;
    color[start] = 0;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        {
            if (color[it] == -1)
            {
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if (color[it] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int N, e;
    cin >> N >> e;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> color(N + 1, -1);

    for (int i = 1; i <= N; i++)
    {
        if (color[i] == -1)
        {
            if (!check(i, adj, color))
            {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    // print teams as 1/2 for nodes 1..N
    for (int i = 1; i <= N; ++i)
    {
        cout << (color[i] + 1) << (i == N ? '\n' : ' ');
    }
    return 0;
}