#include <bits/stdc++.h>

using namespace std;

int main()
{
      int n;
      cin >> n;

      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }

      int minele = INT_MAX;
      for (int i = 0; i < n; i++)
      {
            minele = min(minele, abs(arr[i]));
      }

      cout << minele << endl;
      return 0;
}