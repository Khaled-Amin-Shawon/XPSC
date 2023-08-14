#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin>>t; while (t--)
    {
       int n; cin>>n;
       map<int,int>mp;
       vector<int>v(n+1);
        for (int i=0;i<n; i++)
        {
            int x; cin>>x;
            if(x<=n) mp[x]++;
        }
        int ans=0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j+=i)
            {
                v[j]+=mp[i];
            }
            ans=max(ans,v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
