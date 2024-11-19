#include <bits/stdc++.h>

using namespace std;

int solve(string str)
{
      int left = 0;
      int right = str.length() - 1;
      while (left < right && str[left] != str[right])
      {
            left++;
            right--;
      }
      return (right - left + 1);
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

            cout << solve(str) << endl;
      }
      return 0;
}