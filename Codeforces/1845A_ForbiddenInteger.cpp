#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

void solve() {
    // Your code here

    long long n, k, x;
    cin >> n >> k >> x;

    if(x != 1)
    {
          cout << "YES" << endl;
          cout << n << endl;
          for (int i = 1; i <= n; i++)
          {
                cout << 1 << " ";
          }
          cout << endl;
    }
    else {

            if(k == 1 || (k == 2 && n % 2 == 1)){
                  cout << "NO" << endl;
            }
            else {
                  cout << "YES" << endl;
                  if(n % 2 == 0)
                  {
                        cout << n / 2 << endl;
                        for(int i = 1; i<= n / 2; i++)
                        {
                              cout << 2 << " ";
                        }
                        cout << endl;
                  }
                  else {
                        cout << (n - 3) / 2 + 1 << endl;
                        for (int i = 1; i <= (n - 3) / 2; i++)
                        {
                              cout << 2 << " ";
                        }
                        cout << 3 << endl;
                  }
            }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}