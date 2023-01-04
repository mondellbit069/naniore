#include <bits/stdc++.h>
using namespace std;
long long n,j,p,m;
int main(){
    cin>>m;
    while(m--){
        cin>>n;
        long long a[n],l[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
            l[i]=a[i];
        }
        sort(l,l+n);
        p=l[n-1];
        j=l[n-2];
        for(long long i=0;i<n;i++){
            if(a[i]==p) cout<<p-j<<" ";
            else cout<<a[i]-p<<" ";
        }
        cout<<"\n";
    }
}