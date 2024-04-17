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
pair <ll, ll> a[10000000];
long long f[10000007], pre[10000007];
void giai() {
    long long n, k; cin >> n >> k;
    for(long long i = 1; i <= n; i++) cin >> a[i].F;
    for(long long i = 1; i <= n; i++) {
        cin >> a[i].S;
        a[i].S = - a[i].S + a[i - 1].S;
        f[i] = max(f[i - 1], a[i].F - a[i - 1].S);
        pre[i] = pre[i - 1] + a[i].F;
    }
    while(k--) {
        long long x; cin >> x;
        cout << pre[upper_bound(f + 1, f + n + 1, x) - f - 1] << "\n";
    }
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
