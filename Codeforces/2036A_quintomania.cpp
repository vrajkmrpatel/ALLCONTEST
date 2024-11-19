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
            bool flag = true;
            for (int i = 1; i < n; i++)
            {
                  int semitone = abs(arr[i - 1] - arr[i]);
                  if (semitone != 5 && semitone != 7)
                  {
                        flag = false;
                        break;
                  }
            }
            if (flag)
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
      }
      return 0;
}