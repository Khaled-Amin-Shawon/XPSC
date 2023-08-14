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
        int n,a=0,b=0,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='U')b++;
            else if(s[i]=='D')b--;
            else if (s[i]=='R')a++;
            else if(s[i]=='L')a--;
            if(a==1&&b==1)f=1;
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}