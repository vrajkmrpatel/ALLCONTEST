#include <bits/stdc++.h>

using namespace std;

void solve(int n, int a, int b, string s)
{
      int x = 0, y = 0;
      for (int i = 0; i <= 100 * n; i++)
      {
            if (x == a && y == b)
            {
                  cout << "YES\n";
                  return;
            }
            if (s[i % n] == 'N')
            {
                  y++;
            }
            else if (s[i % n] == 'E')
            {
                  x++;
            }
            else if (s[i % n] == 'W')
            {
                  x--;
            }
            else
            {
                  y--;
            }
      }
      cout << "NO\n";
}
int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, a, b;
            cin >> n >> a >> b;
            string s;
            cin >> s;

            solve(n, a, b, s);
      }
      return 0;
}