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

            int oddCount = 0;
            int evenCount = 0;

            for (int i = 0; i < n; i++)
            {
                  if (arr[i] & 1)
                  {
                        oddCount++;
                  }
                  else
                  {
                        evenCount++;
                  }
            }

            if (oddCount & 1)
            {
                  cout << "NO" << endl;
            }
            else
            {
                  cout << "YES" << endl;
            }
      }
      return 0;
}