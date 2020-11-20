#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cap = 0;
    int min_cap = 0;
    for (int i = 0; i < n; i++) {
        int ex, en;
        cin >> ex >> en;

        cap -= ex;
        cap += en;
        if (cap > min_cap) {
            min_cap = cap;
        }
    }

    cout << min_cap << "\n";

}