#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m, vector<string> &arr)
{
      int count = 0;
      // int prevLength = 0;
      int currLength = 0;

      for (int i = 0; i < n; i++)
      {
            // prevLength = currLength;
            currLength += arr[i].length();

            // check if currlength > m or not
            if (currLength > m)
            {
                  return count;
            }
            count++;
      }
      return count;
}
int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, m;
            cin >> n >> m;

            vector<string> arr(n);

            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            cout << solve(n, m, arr) << endl;
      }
      return 0;
}