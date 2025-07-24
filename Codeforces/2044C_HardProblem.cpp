#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void solve()
{
      // Your code here

      int m, a, b, c;
      cin >> m >> a >> b >> c;

      int total = 0;
      int row1 = m;
      int row2 = m;

      if (a <= row1)
      {
            total += a;
            row1 = row1 - a;
      }
      else
      {
            total += row1;
            row1 = 0;
      }

      if (b <= row2)
      {
            total += b;
            row2 = row2 - b;
      }
      else
      {
            total += row2;
            row2 = 0;
      }

      if (row1 + row2 >= c)
      {
            total += c;
      }
      else
      {
            total += (row1 + row2);
      }

      cout << total << endl;
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
            solve();
      }

      return 0;
}