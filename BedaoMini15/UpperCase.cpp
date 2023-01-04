#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string s;
int main(){
    getline(cin,s);
    s[0]=toupper(s[0]);
    for(long long i=1;i<=s.size()-1;i++) 
        if(s[i]==' ') {
            s[i+1]=toupper(s[i+1]);
            s.erase(s[i]);
        }
        cout<<s;
}