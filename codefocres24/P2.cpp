#include<bits/stdc++.h>
using namespace std;
long long n,testcaselmao,o1=0,mx1=0;
long long gcd(long long a, long long b) {
                                    if (b == 0)
                                            return a;
                        return gcd(b, a % b);
}
int main(){
    cin>>testcaselmao;
                while(testcaselmao--){
                      ]           cin>>n;
                                    long long a[n];
                                            o1=LONG_LONG_MIN;
                                                for(long long i=0;i<n;i++){
                                                                    cin>>a[i];
                                                                     o1=max(o1,a[i]);
                                                                             }
                                             long long tam = a[0];
                                                for(long long i = 1 ; i<n; ++i) tam = gcd(tam, a[i]);
                        cout<<o1/tam<<"\n";
                }
    return 0;
}