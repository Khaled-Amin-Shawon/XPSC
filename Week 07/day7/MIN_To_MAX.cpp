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
        int n,m=101,c=0;;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m=min(m,a[i]);
        }
        for(int i=0;i<n;i++){
           if(a[i]!=m)c++;
        }
        cout<<c<<endl;
    }

    return 0;
}