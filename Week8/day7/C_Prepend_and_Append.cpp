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
        string s;
        cin>>s;
        int i,j=n-1,c=0;
        for(i=0;i<n/2;i++){
            if(s[i]=='0'&&s[j]=='1')c++;
            else if(s[i]=='1'&&s[j]=='0')c++;
            else break;
            j--;
        }
        cout<<n-c*2<<endl;
    }

    return 0;
}