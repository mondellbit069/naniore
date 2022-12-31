#include<bits/stdc++.h>
using namespace std;
long long test,n,k,i=0,j;
int main(){
    cin>>test;
    while(test--){
        cin>>n>>k;
        j=n-1;
        long long a[n];
        for(long long i=1;i<=n;i++) a[i-1]=i;
        while(i<j) cout<<a[j--]<<" "<<a[i++]<<" ";
        if(n%2) cout<<(n+1)/2<<" ";
        cout<<"\n";
    }
}