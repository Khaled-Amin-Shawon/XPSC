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
        int n,f=0,ans,mn=1000000000,x;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=1;i<n;i++){
           if(a[i]<a[i-1]){
            f=1;
            break;
           }
        }
        for(int i=1;i<n;i++){
            x=abs(a[i]-a[i-1]+1);
          mn=min(mn,x);
        }
        if(f==1)ans=0;
        else ans=ceil(mn/2.0);
        //cout<<f<<" "<<mn<<endl;
        cout<<ans<<endl;
    }

    return 0;
}