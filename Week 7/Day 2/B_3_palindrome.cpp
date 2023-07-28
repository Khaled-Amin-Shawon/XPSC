/*
__________________________
| Author:Md.Moniruzzaman |
--------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define f front
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, j = 0;
    cin >> n;
    char ch[] = {'a', 'a', 'b', 'b'};
    for (int i = 0; i < n; i++) {
        cout << ch[j];
        j++;

        if (j == 4) j = 0;
    }
    cout << endl;
return 0;
}
