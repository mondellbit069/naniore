#include <bits/stdc++.h>
using namespace std;
long long n,q,a,r;
int main(){
    cin>>n;
    while(n--){
        cin>>q>>a>>r;
        if(a==r && r==q && q==a) cout<<"Yes"<<"\n";
        else if(q-1 > a+r) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}
