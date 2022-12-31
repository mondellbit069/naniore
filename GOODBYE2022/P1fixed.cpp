#include <bits/stdc++.h>
using namespace std;
 
#define Task "SUBMIT"
#define N 1000006
#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define F first
#define S second
 
ll a[N], b[N];
 
bool cmp(ll &x, ll &y) {
    return x > y;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            ans += a[i];
        }
        for (int j = 1; j <= m; j++)
            cin >> b[j];
        sort(a + 1, a + n + 1);
        sort(b + 1, b + m + 1, cmp);
        int i = 1, j = 1;
        while (i <= n && j <= m && a[i] < b[j]) {
            ans = ans - a[i] + b[j];
            i++;
            j++;
        }
        ll mi = INF;
        if (i == 1 && j == 1) {
            for (int x = 1; x <= n; x++)
                for (int y = 1; y <= m; y++)
                    mi = min(mi, a[x] - b[y]);
            ans -= mi;
        }
        cout << ans << "\n";
    }
    return 0;
}