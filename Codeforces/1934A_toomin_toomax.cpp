#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n;
            cin >> n;

            vector<int> v(n);
            for (int i = 0; i < n; i++)
            {
                  cin >> v[i];
            }

            sort(v.begin(), v.end());

            ll i = v[n - 1];
            ll j = v[0];
            ll k = v[n - 2];
            ll l = v[1];

            ll ans = abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i);
            cout << ans << endl;
      }
      return 0;
}