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

    int t;
    cin >> t;

    int dx[4] = {-1, -1, 1, 1};
    int dy[4] = {-1, 1, -1, 1};
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k_x, k_y;
        cin >> k_x >> k_y;

        int q_x, q_y;
        cin >> q_x >> q_y;

        set<pair<int, int>> king_hits, queen_hits;

        for (int i = 0; i < 4; i++)
        {
            king_hits.insert({k_x + dx[i] * a, k_y + dy[i] * b});
            king_hits.insert({k_x + dx[i] * b, k_y + dy[i] * a});

            queen_hits.insert({q_x + dx[i] * a, q_y + dy[i] * b});
            queen_hits.insert({q_x + dx[i] * b, q_y + dy[i] * a});
        }

        int ans = 0;
        for (auto position : king_hits)
        {
            if (queen_hits.find(position) != queen_hits.end())
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}