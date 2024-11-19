#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(ll l, ll r, ll k)
{
    return ((r / k) - l) + 1;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        ll l, r, k;
        cin >> l >> r >> k;

        int ans = solve(l, r, k);
        if (ans > 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}