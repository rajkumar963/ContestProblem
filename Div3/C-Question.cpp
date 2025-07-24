//C. Simple Repetition

#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<=n/i;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if((isprime(x)&&k==1)||(x==1&&k==2)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}