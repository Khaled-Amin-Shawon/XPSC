/*
__________________________
| Author:Md.Moniruzzaman |
--------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define f front
using namespace std;
void solve()
{
    int n;cin>>n;
    int alice[n],bob[n];
    for(int i=0;i<n;i++) cin>>alice[i];
    for(int i=0;i<n;i++) cin>>bob[i];
    int both=0;
    for(int i=0;i<n;i++)
    {
        if(alice[i]==bob[i]) both++;
       else if(alice[i]>bob[i])
        {
            if(alice[i]<=bob[i]*2)
            {
                both++;
            }
        }
        else 
        {
            if(alice[i]*2>=bob[i])
            {
                both++;
            }
        }
    }
    cout<<both<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
return 0;
}