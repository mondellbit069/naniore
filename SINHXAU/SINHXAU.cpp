#include <bits/stdc++.h>
using namespace std;
string x,y,s;
long long c[10007];
long long ans;
bool cmp(char a,char b){
    return a>b;
}
int main(){
    freopen("SINHXAU.INP","r",stdin);
    freopen("SINHXAU.OUT","w",stdout);
    cin>>x>>y;
    for(long long i=0;i<=x.size()-1;i++)
    c[x[i]]=1;
    for(long long i=0;i<=y.size()-1;i++)
    {
        if(c[y[i]]==1)
        {
            s+=y[i];
            c[y[i]]=0;
        }
    }
    sort(s.begin(),s.end(),cmp);
    cout<<s;
    
}