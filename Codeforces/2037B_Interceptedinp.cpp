#include <bits/stdc++.h>

using namespace std;

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

            sort(arr.begin(), arr.end());

            int x = 0, y = 0;

            int l = 0;
            int r = n - 1;
            while (arr[r] > n - 2)
                  r--;
            while (l < r)
            {
                  if (arr[l] * arr[r] == n - 2)
                  {
                        x = arr[l];
                        y = arr[r];
                        break;
                  }
                  else if (arr[l] * arr[r] > n - 2)
                        r--;
                  else
                        l++;
            }
            cout << x << " " << y << endl;
      }
      return 0;
}