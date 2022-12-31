#include<bits/stdc++.h>
using namespace std;
long long n,res,a;
int main(){
    freopen("BSPITAGO.inp","r",stdin);
    freopen("BSPITAGO.out","w",stdout);
    cin>>n;
     for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            a = i*i + j*j;
            if(int(sqrt(a)) > n)
                break;
            if(int(sqrt(a)) * int(sqrt(a)) == a)
            {
                res++;
            }
        }
    }
    cout<<res+1;
}
