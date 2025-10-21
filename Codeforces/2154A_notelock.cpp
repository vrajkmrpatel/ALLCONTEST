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

      int n, k;
      cin >> n >> k;

      string s;
      cin >> s;

      int count = 0;
      int last_protected = -k;
      
      for (int i = 0; i <= n; i++)
      {
            if (s[i] == '1')
            {
                  if(i - last_protected < k)
                  {
                        // this 1 is already within the range already protected
                        last_protected = i;
                  }
                  else {
                        // isolated 1 so must protect
                        count++;
                        last_protected = i;
                  }
            }
      }
      cout << count << endl;
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