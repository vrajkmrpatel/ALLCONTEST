#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void solve()
{
      int n;
      cin >> n;
      int cnt = 1;

      while (n > 3)
      {
            cnt *= 2;
            n /= 4;
      }
      cout << cnt << endl;
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