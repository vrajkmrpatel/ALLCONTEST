#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(int n, vector<int> &arr)
{

      int currTotal = 1;
      int maxTotal = 1;
      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  if (arr[i] == arr[j])
                  {
                        currTotal++;
                        maxTotal = max(currTotal, maxTotal);
                  }
            }
            currTotal = 1;
      }
      return (n - maxTotal);
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