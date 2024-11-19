#include <bits/stdc++.h>

using namespace std;

void solve(int n, vector<int> &arr)
{
      map<int, int> mp;
      for (auto it : arr)
      {
            mp[it]++;
      }

      if (mp.size() >= 3)
      {
            cout << "NO" << endl;
      }
      else
      {
            if (abs(mp.begin()->second - mp.rbegin()->second) <= 1)
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
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

            // solution
            solve(n, arr);
      }
      return 0;
}