#include <bits/stdc++.h>

using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, k;
            cin >> n >> k;

            string str;
            cin >> str;

            unordered_map<char, int> charMap;
            for (auto ch : str)
            {
                  charMap[ch]++;
            }

            int oddOccurence = 0;
            for (auto it : charMap)
            {
                  if ((it.second) & 1)
                  {
                        oddOccurence++;
                  }
            }

            if (oddOccurence - k > 1)
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