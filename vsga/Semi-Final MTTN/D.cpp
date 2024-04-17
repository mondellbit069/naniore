#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using db = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdb = pair<db, db>;
using vi = vector<int>;
using vl = vector<ll>;
using vdb = vector<db>;
using vb = vector<bool>;
using vs = vector<str>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vpdb = vector<pdb>;
#define Task ""
#define N 10000000
#define INF 1000000000
#define MOD 1000000000
#define F first
#define S second
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
template <typename T> inline T lcm(T a, T b){ return (a / gcd(a, b)) * b;}
long long readLL() { long long x; return cin >> x, x;}
long long dp[10000007], pre[10000007];
pair <long long, long long> a[10000007];
long long l, r;
void giai() {
    long long n, k; cin >> n >> k;
    for(long long i = 0; i < k; i++) cin >> a[i].F >> a[i].S;
    dp[1] = 1, pre[1] = 1;
    for(long long i = 2; i <= n; i++) {
        for(long long j = 0; j < k; j++) {
            l = i - a[j].S;
            r = i - a[j].F;
            if(r < 1) continue;
            l = max(1ll, l);
            dp[i] = (dp[i] + pre[r] - pre[l - 1] + 1000000007) % 1000000007;
        }
        pre[i] = (pre[i - 1] + dp[i]) % 1000000007;
    }
    cout << dp[n] << "\n";
}
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// freopen(Task".inp", "r", stdin);
	// freopen(Task".out", "w", stdout);
    long long test = 1;
    //cin >> test;
    while(test--) {
        giai();

    }
    return 0;
}
