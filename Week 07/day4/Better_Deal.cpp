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
        int a,b;
        cin>>a>>b;
        a=100-a;
        b= 200-(b*2);
        if(a==b)cout<<"BOTH"<<endl;
        else if(a<b)cout<<"FIRST"<<endl;
        else cout<<"SECOND"<<endl;
    }

    return 0;
}