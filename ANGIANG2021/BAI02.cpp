#include<bits/stdc++.h>
using namespace std;
long long n,a[100000007],minn=99999999,maxx=0;
int main(){
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cout<<a[1]<<" "<<a[n];

}