#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

bool isValid(char &ch, map<char, int> &freq)
{
      for (auto it : freq)
      {
            if ((it.first - 0) == it.second)
            {
                  return true;
            }
      }
      return false;
}
string findValidPair(string s)
{
      string ans = "";
      map<char, int> freq;
      for (char &ch : s)
      {
            freq[ch]++;
      }

      for (int i = 0; i < s.size(); i++)
      {
            if (isValid(s[i], freq) && isValid(s[i + 1], freq))
            {
                  ans += (s[i] + s[i + 1]);
            }
      }
      return ans;
}

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      string str = "221";
      cout << findValidPair(str);

      return 0;
}