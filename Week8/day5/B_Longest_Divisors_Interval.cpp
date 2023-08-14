#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

void solve()
{
    ll n,i,a,b;
    cin>>n;
    if(n%2==1)
    {
        cout<<1<<endl;
    }
    else
    {
        a=0;
        for(i=1;i<=n+1;i++)
        {
            if(n%i==0)
            {
                a++;
            }
            else{
               cout<<a<<endl;
               return;
            }
        }
    }
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