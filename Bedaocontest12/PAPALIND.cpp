#include <bits/stdc++.h>
using namespace std;
long long n,ans;
string s;
int a[1000007];
int main(){
    cin>>n;
    cin>>s;
    long long i=1;
    long long lol=s.size()-1;
    for(long long i=0;i<=lol;i++)
    for(long long j=i+1;j<=lol;j++){
        if(s[i]=s[j])
        {
            ans++;
            break;
        }
    }
    
      cout<<ans; 
}