#include <bits/stdc++.h>

using namespace std;

int main() {
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