#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans=0,x=0;
        for(ll i=m;i<=n&&x<10;i+=m){
            ans+=(i%10);
            x++;
        }
        ans*=((n/m)/10);
        ll re=(n/m)%10;
        x=0;
        for(ll i=m;i<=n&&x<re;i+=m){
            x++;
            ans+=(i%10);
        }
        cout<<ans<<endl;
    }

    return 0;
}