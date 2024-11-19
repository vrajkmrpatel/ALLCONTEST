#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<int> &arr)
{
      bool flag = true;
      for (int i = 0; i < n - 1; i++)
      {
            if ((arr[i + 1] - arr[i]) == -1)
            {
                  swap(arr[i + 1], arr[i]);
            }
      }

      for (int i = 0; i < n; i++)
      {
            if (arr[i] != i + 1)
            {
                  flag = false;
            }
      }

      if (flag)
      {
            return "YES";
      }
      else
      {
            return "NO";
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

            cout << solve(n, arr) << endl;
      }
      return 0;
}