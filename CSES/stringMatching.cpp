#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      string str1, str2;
      cin >> str1 >> str2;

      int res = -1;
      int count = 0;
      while ((res = str1.find(str2, res + 1)) != string::npos)
      {
            count++;
      }
      cout << count;

      return 0;
}