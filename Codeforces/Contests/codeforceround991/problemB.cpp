#include <bits/stdc++.h>
#define ll long long

using namespace std;

string solve(int n, vector<int> &arr)
{
      ll Sum0 = 0, Sum1 = 0, Sum = 0;
      for (int i = 0; i < n; i++)
      {
            if (i % 2)
            {
                  Sum0 += arr[i];
            }
            else
            {
                  Sum1 += arr[i];
            }
            Sum += arr[i];
      }

      if (Sum % n == 0)
      {
            int o = (n) / 2;
            int e = n - o;
            Sum /= n;
            if (Sum0 == o * Sum and Sum1 == e * Sum)
            {
                  return "YES";
            }
      }
      return "NO";
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