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
        cin >> n;
        if (n & 1) cout<<-1<<endl;
        else{
            n++;
            while(n--){
                if(n==0) break;
                cout<<n<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}