#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
using namespace std;
long long n,res=0,ans;
string s;
int main() {
    cin>>n;
    while(n--) {
        cin>>s;
        long long num= atoi(s.c_str());
        res=max(res,num);
    }
    cout<<res<<"\n";
    for(long long i=0;i<=s.size()-1;i++) 
    cout<<9;
}