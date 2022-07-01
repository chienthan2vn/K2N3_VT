#include <bits/stdc++.h>
using namespace std;
int a[25][25], n, m, u, v, t, vst[25], st[25], f[25];
int ans = 1e9;
int solve(int x) {
    for (int i = 2; i <= n; i++)
        if (!vst[i] && a[st[x - 1]][i] != 1e9) {
            f[x] = f[x - 1] + a[st[x - 1]][i];
            st[x] = i;
            if (f[x] < ans) {
                if (x < n) {
                    vst[i] = 1;
                    solve(x + 1);
                    vst[i] = 0;
                } else
                    ans = min(ans, f[x] + a[st[x]][1]);
            }
        }
    return ans;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)
                a[i][j] = 1e9;
    while (m--) {
        cin >> u >> v >> t;
        a[u][v] = min(a[u][v], t);
    }
    vst[1] = 1;
    st[1] = 1;
    f[1] = 0;
    cout << solve(2);
}