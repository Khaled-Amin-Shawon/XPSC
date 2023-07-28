#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int a=x[j]-x[i];
                int b=x[k]-x[j];
                if(a==b)
                {
                    ans=true;
                    break;
                }
            }
            if(ans) break;
        }
        if(ans) break;
       
    }
    if (ans)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}