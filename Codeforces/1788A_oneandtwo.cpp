#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int n)
{
      int left = 0;
      int right = n - 1;

      int left_prod = 1;
      int right_prod = 1;

      while (left < right)
      {

            if (left_prod < right_prod)
            {
                  left_prod *= arr[left];
                  left++;
            }
            else if (left_prod >= right_prod)
            {
                  right_prod *= arr[right];
                  right--;
            }
      }
      if (left_prod != right_prod)
      {
            return -1;
      }
      else
      {
            return left;
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