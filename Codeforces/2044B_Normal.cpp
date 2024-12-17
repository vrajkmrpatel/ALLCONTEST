#include <bits/stdc++.h>

using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            string str;
            cin >> str;

            reverse(str.begin(), str.end());

            string ans = "";
            for(char &c: str)
            {
                  if(c == 'p')
                  {
                        ans += 'q';
                  }
                  else if(c == 'q')
                  {
                        ans += 'p';
                  }
                  else {
                        ans += 'w';
                  }
            }
            cout << ans << endl;
      }
      return 0;
}