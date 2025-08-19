#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minEle = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            if(arr[i] < arr[i-1]) {
                minEle = 0;
                break;
            }
            int ans = floor((arr[i] - arr[i - 1]) / 2) + 1;
            minEle = min(minEle, ans);
        }
        cout << minEle << endl;
    }
    return 0;
}