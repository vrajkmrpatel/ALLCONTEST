#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

bool isPerfectSquare(long long x)
{
      // Find floating point value of
      // square root of x.
      if (x >= 0)
      {

            long long sr = sqrt(x);

            // if product of square root
            // is equal, then
            // return T/F
            return (sr * sr == x);
      }
      // else return false if n<0
      return false;
}
void solve()
{
      // Your code here
      string year;
      cin >> year;

      int ynum = stoi(year);

      if (!isPerfectSquare(ynum))
      {
            cout << -1 << endl;
      }
      else
      {
            int sqnum = sqrt(ynum);
            int num1 = 0;
            int num2 = sqnum;
            cout << num1 << " " << num2 << endl;
      }
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }

      return 0;
}