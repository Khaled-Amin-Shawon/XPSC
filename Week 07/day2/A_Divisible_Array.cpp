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
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(n&1)cout<<i<<" ";
            else cout<<i*2<<" ";
        }
        cout<<endl;
    }

    return 0;
}