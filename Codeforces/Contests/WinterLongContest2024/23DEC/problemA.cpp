#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void solve()
{
      // Your code here
      int n, q;
      cin >> n >> q;

      string s;
      cin >> s;

      vector<int> prefix(n + 1, 0);
      for (int i = 0; i < n; i++)
      {
            prefix[i + 1] = (prefix[i] + (s[i] - '0')) % 9;
      }

      while (q--)
      {
            int l1, l2, r1, r2, r;
            cin >> l1 >> r1 >> l2 >> r2 >> r;

            int mod1 = (prefix[r1] - prefix[l1 - 1] + 9) % 9;
            int mod2 = (prefix[r2] - prefix[l2 - 1] + 9) % 9;

            if ((mod1 * mod2) % 9 == r)
            {
                  yes
            }
            else
            {
                  no
            }
      }
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      solve();

      return 0;
}