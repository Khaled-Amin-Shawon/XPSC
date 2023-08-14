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
        ll a1,b1,a2,b2,a3,b3;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        ll m=0,m1=0,ans=1;
        if(a1<a2&&a1<a3){
            m=min((a2-a1),(a3-a1));
        }
        if(b1<b2&&b1<b3){
            m1=min((b2-b1),(b3-b1));
        }
        if(a1>a2&&a1>a3){
            m=min((a1-a2),(a1-a3));
        }
        if(b1>b2&&b1>b3){
            m1=min((b1-b2),(b1-b3));
        }
        ans+=m+m1;
        cout<<ans<<endl;
    }

    return 0;
}