#include<string>
#include<bits/stdc++.h>
using namespace std;
string s,s1;
long long up,down;
int main(){
    cin>>s;
    for(long long i=0;i<=s.size()-1;i++)
    if(s[i]>=65 && s[i]<=90) up++;
    else down++;
    if(up>down) 
        for(long long i=0;i<=s.size()-1;i++) s1+=toupper(s[i]);
        else for(long long i=0;i<=s.size()-1;i++) s1+=tolower(s[i]);
        cout<<s1;
}