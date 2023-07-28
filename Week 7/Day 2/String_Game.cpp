#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, count = 0;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (int i=0;i<n;i++)
    {
        if (!st.empty() && st.top() != s[i])
        {
            st.pop();
            count++;
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (count % 2 == 0)
    {
        cout << "Ramos" << endl;
    }
    else
    {
        cout << "Zlatan" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}