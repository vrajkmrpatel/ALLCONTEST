#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int l = 0, r = 0;
        if (sum % 3 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                sum -= arr[i];
                if (sum % 3 == 0)
                {
                    l = i;
                    break;
                }
            }
            for (int i = l + 1; i < n; i++)
            {
                sum -= arr[i];
                if (sum % 3 == 0)
                {
                    r = i;
                    break;
                }
            }
            cout << l << " " << r << endl;
        }
        else
        {
            cout << 0 << " " << 0 << endl;
        }
    }
    return 0;
}