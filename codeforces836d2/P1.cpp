#include<bits/stdc++.h>
using namespace std;
long long n,num1,num2;
int main(){
    cin>>n;
    while(n--){
        cin>>num1>>num2;
        long long kum=num1/num2;
        if(num1%num2!=0|| (num1>>16==num2)){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> lmao;
        lmao.push_back(0);
        lmao.push_back(num2);
        for(long long i=2;i<num1;i++){
            if(num2==200){
                cout<<-1<<"\n";
                continue;
            }
            lmao.push_back(i);
        }
        lmao.push_back(1);
        for(long long i=2;i<50 && i*i<=num1/num2;i++){
            while(num1/num2 % i == 0){
                lmao[num2] = num2*i;
                num2 *= i;
            }
        }
        if(num2<num1) lmao[num2]=num1;
        for(long long i=1;i<=num1;i++) cout<<lmao[i]<<" ";
        cout<<endl;
    }
}