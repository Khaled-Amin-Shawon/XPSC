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
        int a,b,x;
        cin>>a>>b;
        vector<int>v;
        for(int i=0;i<a;i++){cin>>x;
        v.push_back(x);}
        sort(v.rbegin(),v.rend());
        //for(int i=0;i<a;i++)cout<<v[i];
        int ans=v[b-1]-1;
        cout<<ans<<endl;
    }

    return 0;
}