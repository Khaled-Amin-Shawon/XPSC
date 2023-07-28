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
    int h,x,y;cin>>h>>x>>y;
    int c=0;
    if(y>x)
    {
        h-=y;
        c++;
    }
    while (h>0)
    {
        h-=x;
        c++;
    }
    cout<<c<<endl;
    
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
