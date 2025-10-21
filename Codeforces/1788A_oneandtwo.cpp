#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int n)
{
      int totalTwos = 0;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == 2)
            {
                  totalTwos++;
            }
      }

      int leftTwos = 0;
      int rightTwos = totalTwos;

      for (int i = 1; i < n; i++)
      {
            if (arr[i - 1] == 2)
            {
                  leftTwos++;
                  rightTwos--;
            }

            if (leftTwos == rightTwos)
            {
                  return i;
            }
      }
      return -1;
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