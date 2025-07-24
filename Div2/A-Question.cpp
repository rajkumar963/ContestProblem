//A. Three Decks
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve(int a,int b,int c){
    ll x=a+b+c;
        if(x%3!=0){ return "NO";}    
        ll y=x/3;
        if(y>=a&&y>=b&&y<=c){return "YES";}
        return "NO";      
}
int main(){
    int t;
    cin>>t;
    while(t--){ 
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<endl;
    }
}