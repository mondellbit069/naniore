#include<bits/stdc++.h>
#include<string>
using namespace std;
string s,s1;
int main(){
    cin>>s;
    for(long long i=0;i<=s.size()-1;i++) s1+=toupper(s[i]);
    if(s[0]==s1[0]) cout<<s;
    else {
        s[0]=s1[0];
    cout<<s;
    }
}