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
        int n,c=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++){
            if(a[i]==i)c++;
        }
        int ans=ceil((1.0*c)/2);
        cout<<ans<<endl;
    }

    return 0;
}