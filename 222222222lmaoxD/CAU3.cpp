#include <bits/stdc++.h>
using namespace std;
long long l,n;
int main(){
        cin>>n;
        long long a[n];
        for(long long i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        cout<<a[1]*a[2]*a[3];
}