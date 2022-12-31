#include <bits/stdc++.h>
using namespace std;
long long n,a[1000007],f[1000007],x,ans;
int main()
{
    freopen("vsga.inp","r",stdin);
    freopen("vsga.out","w",stdout);
    cin>>n;
    memset(a,0,sizeof(a));
    for(long long i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
        ans = max(ans,x);
    }
    f[1]=1*a[1];
    for(long long i=2;i<=n;i++)
    f[i]=max(f[i - 1] , f[i - 2] + i * a[i]);
    cout<<f[ans];
}
