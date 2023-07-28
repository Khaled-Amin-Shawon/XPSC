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
    float a,b;
    cin>>a>>b;
    int aa=100-a;
    int bb=200-2*b;
    if(aa<bb) cout<<"FIRST"<<endl;
    else if(aa==bb) cout<<"BOTH"<<endl;
    else cout<<"SECOND"<<endl;
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
