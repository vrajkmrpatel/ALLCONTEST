#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod1 1000000007
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

    
      int n;
      cin>>n;

        set<int> st;
      for(int i = 0; i<n; i++)
      {
        int temp;
        cin>>temp;

        st.insert(temp);
      }

      cout<<st.size();


      return 0;
}