#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, f = 0;
    cin >> n >> m;
    for (int i = 2; i < m ; i++)
    {
        if (m % i == 0)
        {
            f = 1;
        }
    }
    for (int i = n + 1; i < m; i++)
    {
        int x = 0;
        for (int j = 2; j < i ; j++)
        {
            if (i % j == 0)
                x = 1;
        }
        if (x == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}