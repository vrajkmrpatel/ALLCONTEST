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

            list<int> ans{4, 5};
            if (n <= 4)
            {
                  cout << -1 << endl;
                  continue;
            }

            for (int i = 1; i <= n; i++)
            {
                  if (i == 4 || i == 5)
                  {
                        continue;
                  }
                  else if (i & 1)
                  {
                        ans.push_back(i);
                  }
                  else
                  {
                        ans.push_front(i);
                  }
            }

            for (auto it : ans)
            {
                  cout << it << " ";
            }
      }
      return 0;
}