#include<bits/stdc++.h>
using namespace std;
#define Task "sumfive"
#define N 10000007
#define INF 1000000000
#define MOD 1000000007
#define mod 1000000007
#define ll long long
#define F first
#define S second
#define add(s) s = " " + s;
#define read(a) for(long long i = 1; i <= n; i++) cin >> a[i];
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
template <typename T> inline T lcm(T a, T b){ return (a / gcd(a, b)) * b;}
long long readLL() { long long x; return cin >> x, x;}
void giai() {
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    ll m = t.size();

    ll dp[2][m + 1];
    dp[0][0] = 1;
    dp[1][0] = 1;
    for (ll i = 1; i <= m; i++) dp[0][i] = 1;

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            if (s[i - 1] != t[j - 1]) 
                dp[i % 2][j] = 0;
            else 
                dp[i % 2][j] = dp[1 - i % 2][j - 1];
            dp[i % 2][j] += dp[1 - i % 2][j] + dp[i % 2][j - 1] - dp[1 - i % 2][j - 1];
            dp[i % 2][j] = (dp[i % 2][j] % mod + mod) % mod;
        }
    }

    cout << (dp[n % 2][m] - 1 + mod) % mod;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// freopen("sk11a.txt", "r", stdin);
	// freopen("thongke.txt", "w", stdout);
    long long t = 1;
    //cin >> t;
    while(t--) {
        giai();
    }
    return 0;
}