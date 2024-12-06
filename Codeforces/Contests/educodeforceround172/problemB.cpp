#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int n)
{

      unordered_map<int, int> mp;
      for (auto curr : arr)
      {
            mp[curr]++;
      }

      int x = 0;
      int y = 0;

      for (auto curr : mp)
      {
            if (curr.second == 1)
            {
                  x++;
            }
            else
            {
                  y += 2;
            }
      }

      int alice = 0;
      if (x % 2 == 0)
      {
            alice = (x / 2) * 2;
            alice += (y + 1) / 2;
            return alice;
      }
      else
      {
            alice = ((x + 1) / 2) * 2;
            alice += (y) / 2;
            return alice;
      }
}
int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n;
            cin >> n;

            vector<int> arr(n);
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            cout << solve(arr, n) << endl;
      }
      return 0;
}