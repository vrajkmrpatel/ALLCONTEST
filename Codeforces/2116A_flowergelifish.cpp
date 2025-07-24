#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

string solve()
{
      // Your code here
      int a, b, c, d;
      cin >> a >> b >> c >> d;

      for (int k = 1;; k++)
      {
            if (k & 1 && c > 0)
            {
                  b--;
                  if (b <= 0)
                  {
                        return "Gellyfish";
                  }
                  d--;
            }
            else if (d > 0)
            {
                  a--;
                  if (a <= 0)
                  {
                        return "Flower";
                  }
                  c--;
            }
      }
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int t;
      cin >> t;
      while (t--)
      {
            cout << solve() << endl;
      }

      return 0;
}