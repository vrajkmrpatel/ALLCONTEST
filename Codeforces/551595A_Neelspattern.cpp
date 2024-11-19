#include <bits/stdc++.h>

using namespace std;

int findSum(int n)
{
      if (n == 0)
      {
            return 0;
      }

      return n + findSum(n - 1);
}
int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n;
            cin >> n;

            string str;
            cin >> str;

            int num = 0;
            for (int i = 1; i < str.length() - 1; i++)
            {
                  if (str[i - 1] == '1' && str[i] == '0' && str[i + 1] == '1')
                  {
                        num += 1;
                  }
            }

            cout << findSum(num) << endl;
      }
      return 0;
}