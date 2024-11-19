#include <bits/stdc++.h>

using namespace std;

vector<int> generateextremelyRoundNo()
{
      vector<int> extremelyRound;

      for (int power = 1; power <= 1000000; power *= 10)
      {
            for (int digit = 1; digit <= 9; digit++)
            {
                  extremelyRound.push_back(digit * power);
            }
      }
      return extremelyRound;
}

int main()
{
      int t;
      cin >> t;

      vector<int> extremelyRoundNo = generateextremelyRoundNo();

      sort(extremelyRoundNo.begin(), extremelyRoundNo.end());

      while (t--)
      {
            int n;
            cin >> n;

            int count = 0;
            for (int x : extremelyRoundNo)
            {
                  if (x <= n)
                  {
                        count++;
                  }
                  else
                        break;
            }
            cout << count << endl;
      }
      return 0;
}