#include<bits/stdc++.h>
using namespace std;
string s;
long long test;
long long f[69727];
bool testint;
int main(){
    cin>>test;
    getline(cin,s);
    while(test--){
        testint=false;
        getline(cin,s);
        s+=" ";
        for(long long i=1;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z' && s[i-1] != ' '){
                testint=true;
                break;
            } 
            else{
                 if(s[i] >= 'A' && s[i] <= 'Z' && s[i-1] != ' '){
                    testint = true;
                    break;
                 }
            }
            if(s[i] == ' ' && s[i-1] == ' '){
                testint=
            }
        }
    }
}