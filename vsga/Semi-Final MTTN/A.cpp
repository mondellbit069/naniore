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
void giai() {
    long long n; cin >> n;
    long long a[n + 1] = {0}; 
    map <long long, long long> mp;
    long double avg = 0, sigma = 0;
    long long mode = 0, cnt = 0;
    for(long long i = 1; i <= n; i++) {
        cin >> a[i], avg += a[i];
        mp[a[i]]++;
        if(mp[a[i]] >= cnt) {
            cnt = mp[a[i]];
            mode = min(mode, a[i]);
        }
    }
    avg /= n;
    sort(a + 1, a + n + 1);
    long long median = 0;
    if(n & 1) median = a[n / 2];
    else median = (a[n / 2 + 1]);
    for(long long i = 1; i <= n; i++) {
        sigma += (avg - a[i]) * (avg - a[i]);
    }
    sigma /= n;
    sigma = sqrtl(sigma);
    cout << a[n] << "\n";
    cout << a[1] << "\n";
    cout << fixed << setprecision(8) << avg << "\n";
    cout << median << "\n";
    cout << mode << "\n";
    cout << fixed << setprecision(8) << sigma << "\n";
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
