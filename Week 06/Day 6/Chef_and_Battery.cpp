#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        int min = 0;
        while (c != 50)
        {
            if (c < 50)
            {
                min++;
                c += 2;
            }
            else
            {
                min++;
                c -= 3;
            }
        }
        cout<<min<<endl;
    }
}