#include <bits/stdc++.h>

using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            long long n, k, x;
            cin >> n >> k >> x;

            long long min = k * (k + 1) / 2;
            long long max = n * k - k * (k - 1) / 2;

            if (min <= x && x <= max)
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