#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> &arr)
{
      int ans = 0;
      if (n == 1)
      {
            return ans;
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  if (arr[i] == arr[j] && arr[i] != -1 && arr[j] != -1)
                  {
                        arr[i] = arr[j] = -1;
                        ans += 1;
                  }
            }
      }
      return ans;
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