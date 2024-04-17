#include<bits/stdc++.h>
using namespace std;
#define Task "sumfive"
#define N 10000007
#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define F first
#define S second
#define read(a) for(long long i = 1; i <= n; i++) cin >> a[i];
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
template <typename T> inline T lcm(T a, T b){ return (a / gcd(a, b)) * b;}
long long readLL() { long long x; return cin >> x, x;}
void giai() {
    long long n; cin >> n;
    vector <long long> a(n + 1);
    map <long long, long long> mp;
    for(long long i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    long long ans = 0;
    for(long long i = 1; i <= 1000; i++) {
        for(long long j = i + 1; j <= 1000; j++) {
            long long sum = i * i + j * j;
            if(sum > 1000000) break;
            long long tmp = sqrtl(sum);
            ans += (tmp * tmp == sum ? 1ll * mp[i] * mp[j] * mp[tmp] : 0);
        }
    }
    cout << ans;
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