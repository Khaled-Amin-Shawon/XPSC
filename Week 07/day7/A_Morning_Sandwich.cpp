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
        int b,c,h,ans;
        cin>>b>>c>>h;
        if(b>c+h)ans=(c+h)+(c+h+1);
        else ans=b+(b-1);
        cout<<ans<<endl;
    }

    return 0;
}