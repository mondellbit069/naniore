#include <bits/stdc++.h>
using namespace std;
long long n,a,f[10000007];
long long datvinacon(long long x)
{
    long long a = x/2, b = x/3, c = x/4;
    if(x<=1000007) return(f[x]);
    return(max(n,datvinacon(a) + datvinacon(b) + datvinacon(c)));

}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    freopen("tienvang.inp","r",stdin);
    freopen("tienvang.out","w",stdout);
    f[1]=1;f[2]=2;
    for(long long i=3;i<=1000007;i++)
        f[i]=max(i,f[i/2]+f[i/3]+f[i/4]);
    cin>>n;
    while(n--)
    {
        cin>>a;
        cout<<datvinacon(a)<<"\n";
    }
}
