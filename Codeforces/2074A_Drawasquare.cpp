#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

bool solve() {

    int l, r, d, u;
    cin >> l >> r >> d >> u;

    int diag1 = pow(l, 2) + pow(r, 2);
    int diag2 = pow(d, 2) + pow(u, 2);
     
    int side1 = pow(l, 2) + pow(u, 2);
    int side2 = pow(l, 2) + pow(d, 2);
    int side3 = pow(u, 2) + pow(r, 2);
    int side4 = pow(r, 2) + pow(d, 2);

    return (diag1 == diag2) && (side1 == side2) && (side2 == side3) && (side3 == side4);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        if(solve())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}