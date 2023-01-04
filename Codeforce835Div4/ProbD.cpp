#include <bits/stdc++.h>
using namespace std;
long long m,n;
int main(){
    cin>>m;
    while(m--){
                    cin>>n;
                    long long a[n];
                            for(long long i=0;i<n;i++){
                                        cin>>a[i];
                                }
                                            long long j=1;
                                                for(long long i=0;i<n-1 && j==1;i++){
                                                                        if(a[i]<a[i+1]){
                                                                                     j=0;
                                                                            while(a[i+1]>=a[i] && i<n-1) i++;
                                                                    if(i==n-1){
                                                         cout<<"YES"<<"\n";
                                                    break;
                                                }
                                    else cout<<"NO"<<"\n";
                                }
                            }
        if(j==1) cout<<"YES"<<"\n";
    }
}