#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int n, int k)
{
      sort(arr.begin(), arr.end(), greater<>());

      int sum = 0;
      int minAdd = 0;
      int usedCoin = 0;
      int lastSum = 0;

      if (arr[0] > k)
            return 0;
      else
      {
            for (int i = 0; i < n; i++)
            {
                  lastSum = sum;
                  sum += arr[i];
                  if (sum > k)
                  {
                        return k - lastSum;
                  }
            }
      }
      if (sum < k)
      {
            return k - sum;
      }
}
int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, k;
            cin >> n >> k;

            vector<int> arr(n);
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            cout << solve(arr, n, k) << endl;
      }
      return 0;
}