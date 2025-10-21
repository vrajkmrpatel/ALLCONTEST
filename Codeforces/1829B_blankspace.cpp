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
      int n;
      cin >> n;

      vector<int> arr(n);

      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }

      int len = 0;
      int maxlen = 0;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == 0)
            {
                  len++;
            }
            else
            {
                  len = 0;
            }
            maxlen = max(maxlen, len);
      }

      return maxlen;
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