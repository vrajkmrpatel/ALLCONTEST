#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int solve()
{
      // Your code here
      int a, b, c, d;
      cin >> a >> b >> c >> d;

      if (d < b)
            return -1;

      int moves = 0;

      moves += (d - b);

      a += moves;

      if (a < c)
            return -1;

      moves += (a - c);

      return moves;
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