//B. The Third Side
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         int sum=0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             sum+=a[i];
//         }
//         if(n==1)cout<<a[0]<<endl;
//         else
//         cout<<sum-(n-1)<<endl;
//     }
// }


//B. Tournament
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s=a[j-1];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]>s){
                cnt++;
            }
        }
        if(cnt<=k-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}