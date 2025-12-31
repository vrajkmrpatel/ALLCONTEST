#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t; 

    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        if (x <= y)
        {
            if (y & 1)
            {
                cout << (y * y - (x - 1)) << endl;
            }
            else
            {
                cout << ((y - 1) * (y - 1) + x) << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << (x * x - (y - 1)) << endl;
            }
            else
            {
                cout << ((x - 1) * (x - 1) + y) << endl;
            }
        }
    }
    return 0;
}