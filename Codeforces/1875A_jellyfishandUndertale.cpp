#include <bits/stdc++.h>

using namespace std;

long long maxTimeToEvacuate(int a, int b, int n, vector<int> &arr)
{
      long long timer = b;
      
      for(int i = 0; i<n; i++)
      {
            timer += min(a - 1, arr[i]);
      }
      return timer;
}
int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int a, b, n;
            cin >> a >> b >> n;

            vector<int> arr(n);
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }
            cout << maxTimeToEvacuate(a, b, n, arr) << endl;
      }
      return 0;
}