#include<bits/stdc++.h>
using namespace std;
#define Task "sumfive"
#define N 10000000
#define INF 1000000000
#define MOD 1000000000
#define ll long long
#define F first
#define S second
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
template <typename T> inline T lcm(T a, T b){ return (a / gcd(a, b)) * b;}
long long readLL() { long long x; return cin >> x, x;}
long long sivseg(long long L, long long R) {
    vector<bool> isPrime(R - L + 1, true);  // x là số nguyên tố khi và chỉ khi isPrime[x - l] == true
    long long cnt = 0;
    for (long long i = 2; i * i <= R; ++i) {
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
            isPrime[j - L] = false;
        }
    }

    if (1 >= L) {  // Xét riêng trường hợp số 1
        isPrime[1 - L] = false;
    }

    for (long long x = L; x <= R; ++x) {
        if (isPrime[x - L]) {
            cnt++;
        }
    }
    return cnt;
}
void giai() {
    long long l, r;
    cin >> l >> r;
    cout << sivseg(l, r) << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// freopen(Task".inp", "r", stdin);
	// freopen(Task".out", "w", stdout);
    long long t = 1;
    cin >> t;
    while(t--) {
        giai();
    }
    return 0;
}
