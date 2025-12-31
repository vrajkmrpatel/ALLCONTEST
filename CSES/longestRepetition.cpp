#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    string str;
    cin >> str;

    long long count = 1;
    long long maxCount = 1;

    for (int i = 1; i < str.length(); i++)
    {
        count++;
        if (str[i - 1] != str[i])
        {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;
    return 0;
}