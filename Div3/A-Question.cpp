//A. Dr. TC
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,res=0;
//         cin>>n;
//         string s;
//         cin>>s;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='1'){
//                res+=n-1;
//             }else{
//                 res++;
//             }
//         }
//         cout<<res<<endl;
//     }
// }


// //A. Blackboard Game

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%4==0){
//             cout<<"Bob"<<endl;
//         }else{
//             cout<<"Alice"<<endl;
//         }
//     }
// }


//A. Only One Digit

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int x;
        cin>>x;
        int mindigit=INT_MAX;
        while(x>0){
            int d=x%10;
            if(d<mindigit){
                mindigit=d;
            }
            x/=10;
        }
        cout<<mindigit<<endl;
    }
}