#include <bits/stdc++.h>

using namespace std;

string change(string str)
{
      str[0] = toupper(str[0]);

      for (auto &ch : str)
      {
            ch = tolower(ch);
      }
      return str;
}
int main()
{
      string str;
      cin >> str;

      if (isupper(str[0]))
      {
            for (int i = 1; i < str.length(); i++)
            {
                  if (!isupper(str[i]))
                  {
                        cout << str << endl;
                        break;
                  }
            }
            
      }
      else if (islower(str[0]))
      {
            for (int i = 1; i < str.length(); i++)
            {
                  if (!isupper(str[i]))
                  {
                        cout << str << endl;
                        break;
                  }
            }
            // All are upper
            cout << change(str) << endl;
      }
      else
      {
            cout << change(str) << endl;
      }

      return 0;
}