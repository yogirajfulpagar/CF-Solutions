#include <bits/stdc++.h>
#define int int64_t
using namespace std;
main()
{
    int tt;
    // 1100 1000 0011
    cin >> tt;
    while (tt--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1], pref[n + 1] = {0}, s[n + 1] = {0};
        for (int i = 1; i <= n; i++)
            cin >> a[i], pref[i] = pref[i - 1] + a[i], s[i] = (s[i - 1] ^ a[i]);
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int ans = pref[r] - pref[l - 1] - (s[r] ^ s[l - 1]);
            int L = l, R = r;
            for (int i = l, j = r; i <= j; j--)
            {
                i = max(i - 1, l);
                while (j > i and pref[j] - pref[i] - (s[j] ^ s[i]) == ans)
                    i++;
                if (pref[j] - pref[i - 1] - (s[j] ^ s[i - 1]) == ans and j - i + 1 < R - L + 1)
                    R = j, L = i;
            }
            cout << L << " " << R << endl;
        }
    }
}   