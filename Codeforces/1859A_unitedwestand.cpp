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

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b, c;

        ll maxEle = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] != maxEle)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }

        if (b.size() == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
        }
    }
    return 0;
}