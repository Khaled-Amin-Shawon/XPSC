#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<int> dq;
    map<int, int> mp;
    int f, b;
    for (int i = 0; i < n; i++)
    {
        
        if (dq.size() < k && mp[a[i]] == 0)
        {
            dq.push_front(a[i]);
            mp[a[i]] = 1;
        }
        else if (dq.size() < k&&mp[a[i]]==1)
        {
            continue;
        }
        else if (mp[a[i]] == 0)
        {
            mp[dq.back()] = 0;
            dq.pop_back();
            dq.push_front(a[i]);
            mp[a[i]]=1;
        }
       // cout<<dq.front()<<" "<<dq.back()<<endl;
    }
    cout << dq.size() << endl;
    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
}